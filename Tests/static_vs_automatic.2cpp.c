#include <iostream>

void incrementAndPrint()
{
    using namespace std;

    static int value = 1; // static duration
    ++value;

    cout << value << endl;

    // value is not destroyed here, but becomes inaccessible
}

int main(void)
{
    incrementAndPrint();
    incrementAndPrint();
    incrementAndPrint();
}
