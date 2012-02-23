#include <iostream>
#include <cstdlib>

using namespace std;

int main(void)

{
    int num = 3;
    for(int i = 0; i<10; i++)
    {



        int result = ( rand() % num );

        cout << result << endl;

    }



    return 0;
}
