#include <iostream>

using namespace std;

int main(void)

{
#define MY_NAME "Alex"
    cout << "My name is " << MY_NAME << endl;
#undef MY_NAME
    //cout << "My name is " << MY_NAME << endl;

    return 0;
}
