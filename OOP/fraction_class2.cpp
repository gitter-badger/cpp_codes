#include <iostream>

using namespace std;

class Fraction
{
    private:

        int num, den;

    public:
        void set(int n, int d)
        {
            num = n;
            den = d;
            normalize();
        }

        int get_num(){return num;}
        int get_den(){return den;}

        Fraction add(Fraction other);
        Fraction mult(Fraction other);

    private:
        void normalize();
        int gcf(int a, int b);
        int lcm(int a, int b);
};

int main(void)

{
    Fraction fract1, fract2, fract3;

    fract1.set(1,2);
    fract2.set(1,3);
    fract3 = fract1.add(fract2);

    cout << "1/2 plus 1/3 = ";

    cout << fract3.get_num() << "/" << fract3.get_den() << endl;




	return 0;
}

void Fraction::normalize()
{
    if(den == 0 || num == 0)
    {
        num = 0;
        den = 1;
    }

    if(den < 0)
    {
        num *= -1;
        den *= -1;
    }

    int n = gcf(num, den);
    num = num/n;
    den = den/n;


}

int Fraction::gcf(int a, int b)
{
    if(b== 0)
        return a;

    else
        return gcf(b, a%b);
}

int Fraction::lcm(int a, int b)
{
    int n = gcf(a,b);

    return a / n * b;
}

Fraction Fraction::add(Fraction other)
{
    Fraction fract;

    int lcd = lcm(den, other.den);
    int quot1 = lcd/den;
    int quot2 = lcd/other.den;

    fract.set(num * quot1 + other.num *quot2, lcd);

    return fract;
}

Fraction Fraction::mult(Fraction other)
{
    Fraction fract;
    fract.set(num * other.num, den * other.den);
    return fract;
}
