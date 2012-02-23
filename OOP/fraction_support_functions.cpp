#include <iostream>
#include <cstdlib>

class Fraction
{
    private:
        int num, den;
    public:
        void set(int n, int d)
            {
                num = n;
                den = d;
            }
        int get_num() {return num;}
        int get_den() {return den;}

    private:
        void normalize(); // convert to standard form
        int gcf(int a, int b); // Greatest common factor
        int lcm(int a, int b); // Lowest common multiple

}

using namespace std;


// NOrmalize: put fraction into standard form
// for each mathematically different value.

int main(void)

{

	void Fraction::normalize()
	{
	    // Handle cases involving 0

	    if(den == 0 || num == 0)
	    {
	        num = 0;
	        den = 1;
	    }

	    // PUt neg. sign in numerator only.

	    if(den < 0)
	    {
	        num *= -1;
	        den *= -1;
	    }

	    // Factor out GCF from numerator and denominator.

	    int n = gcf(num, den);
	    num = num / n;
	    den = den / n;
	}

    // Greates common factor

    int Fraction::gcf(int a, int b)
    {
        if (b == 0)
            return abs(a);
        else
            return gcf(b, a % b);
    }

    // LCM

    int Fraction::lcm(int a, int b)
    {
        int n = gcf(a,b);
        return a / n * b;
    }






	return 0;
}
