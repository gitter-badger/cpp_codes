#include <iostream>
#include <cstdlib>
using namespace std;

class Fraction
{
private:
    int num, den;
public:
    Fraction()
    {
        set(0,1);
    }
    Fraction(int n, int d)
    {
        set(n,d);
    }
    Fraction(Fraction const &src);

    void set(int n, int d)
    {
        num = n;
        den = d;
        normalize();
    }
    int get_num()
    {
        return num;
    }
    int get_den()
    {
        return den;
    }

    Fraction add(Fraction other);
    Fraction mult(Fraction other);

private:
    void normalize();
    int gcf(int a, int b);
    int lcm(int a, int b);

};

int main(void)

{

   Fraction f1(3,4);
   Fraction f2(f1);

   Fraction f3 = f1.add(f2);

   cout << "The value of f3 is ";
   cout << f3.get_num() << "/";
   cout << f3.get_den() << endl;







    return 0;
}


// copy constructor

Fraction::Fraction(Fraction const &src)
{
    cout << "Now calling copy constructor." << endl;
    num = src.num;
    den = src.den;
}


void Fraction::normalize()
{
    // Handle cases involving 0
    if (den == 0 || num == 0)
    {
        num = 0;
        den = 1;
    }
// Put neg. sign in numerator only.
    if (den < 0)
    {
        num *= -1;
        den *= -1;
    }

    int n = gcf(num, den);
    num = num / n;
    den = den / n;
}

int Fraction::gcf(int a, int b)
{
    if(b==0)
        return abs(a);
    else
        return gcf(b,a%b);
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

    fract.set(num * quot1 + other.num * quot2, lcd);
    return fract;
}

Fraction Fraction::mult(Fraction other)
{
    Fraction fract;
    fract.set(num * other.num, den * other.den);
    return fract;
}
