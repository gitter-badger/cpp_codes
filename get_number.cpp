#include <iostream>
#include <cmath>
#include <cstdlib>
#include <cstring>

double get_number(void);

using namespace std;

int main(void)
{
    double x;

    while(true)
    {
        cout<<"Enter a number(Press enter to exit): ";
        x = get_number();

        if(x==0.0) break;

        cout<< "Square root of x is: " << sqrt(x);

        cout<< endl;


    }

    return 0;

}

double get_number(void)
{
    char s[100];

    cin.getline(s,99);

    if( strlen(s) == 0)
        return 0.0;
    return atof(s);
}
