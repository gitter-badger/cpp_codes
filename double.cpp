#include <iostream>

using namespace std;

int double_num(int n);

int double_num_ptr(int *n);

int main(void)
{
    cout<< "Enter a number" << endl;

    int num;

    cin >> num;



    cout<< "Calling double_num..." << double_num(num) << endl;

    cout << "Value of num: " << num << endl;

    cout << "Calling double_num_ptr.."<< double_num_ptr(&num) << endl;



    cout << "Value of num: " << num << endl;


}

int double_num(int n)
{

    n = 2 * n;

    return n;


}

int double_num_ptr(int *n)
{

    *n = *n * 2;
    return *n;
}

