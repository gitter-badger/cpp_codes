#include <iostream>

void incrementAndPrint()

{
    using namespace std;
    int value=1; // automatic duration by default
    ++value;
    cout << value << endl;

    // value is destroyed here

}

int main(void)
{
    incrementAndPrint();
    incrementAndPrint();
    incrementAndPrint();
}
