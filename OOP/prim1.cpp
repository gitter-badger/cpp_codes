#include <iostream>

using namespace std;

int main(void)

{

    int num;
	cout << "Enter a num: ";
	cin >> num;

	int i;

	i = 2;

	int is_prime = true;
	while(i*i < num) // that is i is less than sqrt of num

	{
	    if( (num%i) == 0 )
            is_prime = false;
            break;
        i++;
	}

	if(is_prime == true)
        cout << "Prime" << endl;

    else
        cout << "not prime." << endl;





	return 0;
}
