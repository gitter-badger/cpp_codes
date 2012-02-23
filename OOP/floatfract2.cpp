#include <iostream>
#include "Fract.h"


using namespace std;

class FloatFraction : public Fraction{

    public:

        double float_val;

        // Inherited constructors: with C++0x,
        // these can all be replaced with
        // using Fraction::Fraction;

        FloatFraction() {set(0,1);}
        FloatFraction(int n, int d) {set(n,d);}
        FloatFraction(int n) {set(n,1);}
        FloatFraction(const FloatFraction &src) { set( src.get_num(), src.get_den() );}

        FloatFraction(const Fraction &src) {set( ( src.get_num(), src.get_den() );}

        void normalize(); // Overriden

};

void FloatFraction::normalize()
{
    Fraction::normalize();
    float_val = (double) get_num()/ get_den();
}

int main(void)

{

    FloatFraction fract3 = fract1 + fract2;
    cout << "1/4 + 1/2 = " << fract3 << endl;

    cout << fract3.float_val << endl;






	return 0;
}
