#include <iostream>
#include "io.h"

using namespace std;





int main()
{
    cout << "Enter a number: ";
    int num1 = readNumber();

    cout << "Enter another number: ";
    int num2 = readNumber();

    int sum = num1 + num2;

    writeAnswer(sum);

// alternative code
/*
    writeAnswer(num1 + num2);
*/
    return 0;
}
