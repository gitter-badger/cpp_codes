#include <iostream>

using namespace std;

int main(void)

{
#define PRINT_JOE

#ifdef PRINT_JOE
    cout << "Joe" << endl;
#endif

#ifdef PRINT_BOB
    cout << "Bob" << endl;
#endif

return 0;
}
