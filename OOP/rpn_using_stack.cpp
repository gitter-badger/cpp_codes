#include <iostream>
#include <stack>
#include <cstring>

using namespace std;
#define MAX_CHARS 100

int main(int argc, char *argv[])

{
    char input_str[MAX_CHARS+1], *p;

	stack<double> stac num_stack;

	int c;
	double a, b, n;

	cout << "Enter RPN string: ";
	cin.getline(input_str, MAX_CHARS);
	p = strtok(input_str, " ");

	while(p)
	{
	    c = p[0];

	    if(c== '+' || c == '*' || c == '/' || c == '-')
	    {
	        if(num_stack.size() < 2)
	        {cout << "Error: too many ops." << endl;

	        return -1;}


	    b = num_stack.top(); num_stack.pop();
	    a = num_stack.top(); num_stack.pop();

	    switch(c)
	    {
	        case '+': n = a + b; break;
	        case '-': n = a-b; break;
	        case '/': n = a/b; break;

	        case '*': n = a*b; break;
	    }


	} else num_stack.push( atof(p) );

	p = strtok(NULL, " ");

	}

	cout << "The answer is : " << num_stack.top() << endl;



	return 0;
}
