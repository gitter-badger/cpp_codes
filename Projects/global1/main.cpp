#include <iostream>

using namespace std;

extern int global_value;

int main()
{

    global_value = 7;

    cout << global_value;
    return 0;
}
