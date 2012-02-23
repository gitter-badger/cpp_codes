#include <iostream>

using namespace std;

template <class myType>
myType getMax (myType a, myType b)
{
    return (a>b ? a : b);
}

int main(void)

{
    cout << "Enter two numbers: ";

    int num1, num2;
    cin >> num1 >> num2;

    cout << getMax(num1,num2) << " is greater" << endl;


	return 0;
}
