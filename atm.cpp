#include <iostream>

using namespace std;

int main(void)
{
    int withdrawal;
    float balance;

    cin>> withdrawal;
    cin>> balance;

    if( withdrawal<balance && (withdrawal % 5 == 0) )
    {
        cout<< balance - (withdrawal + 0.5) << endl;
    }

    else cout<< balance << endl;

    cout<< withdrawal<< endl;

    cout<< balance<< endl;
}
