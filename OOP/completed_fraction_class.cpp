// There is bug in this program

// I will fix it later


#include <iostream>
#include <cstdlib>

using namespace std;

class Fraction
{

    private:
        int num, den;
    public:
        Fraction() { set(0,1);}


        Fraction(int n, int d) {set(n,d);}

        Fraction(int n) { set(n,1);}

        Fraction(const Fraction &src);

        void set(int n, int d)
        {
            num = n;
            den = d;
            normalize();
        }


        int get_num() const
        {
            return num;
        }
        int get_den() const
        {
            return den;
        }
        Fraction add(const Fraction &other);
        Fraction mult(const Fraction &other);

        Fraction operator+(const Fraction &other)
        {
            return add(other);
        }
        Fraction operator*(const Fraction &other)
        {
            return mult(other);
        }

        bool operator==(const Fraction &other);

        friend ostream &operator<<(ostream &os, Fraction &fr);

    private:
        void normalize();
        int gcf(int a, int b);
        int lcm(int a, int b);




};

int main(void)

{
    Fraction f1(1,2);
    Fraction f2(4,6);

    Fraction f3 = f1 + f2 + 1;

    cout << "1/2 + 4/6 + 1 = " << f3 <<endl;







    return 0;
}

Fraction::Fraction(Fraction const &src)
{
    num = src.num;
    den = src.den;
}

void Fraction::normalize()
{
    if(den == 0 || num == 0)
        num = 0;
    den = 1;

    if(den < 0)
    {
        num *= -1;
        den *= -1;

    }

    int n = gcf(num, den);
    num = num / n;
    den = den /n;
}

int Fraction::gcf(int a, int b)
{
    if(b==0)
        return abs(a);
    else
        return gcf(b, a%b);
}

int Fraction::lcm(int a, int b)
{
    int n = gcf(a,b);
    return a / n * b;
}

Fraction Fraction::add(const Fraction &other)
{
    int lcd = lcm(den, other.den);
    int quot1 = lcd/den;
    int quot2 = lcd/other.den;

    return Fraction(num * quot1 + other.num * quot2, lcd);
}

Fraction Fraction::mult(const Fraction &other)
{
    return Fraction(num*other.num, den *other.den);
}


bool Fraction::operator==(const Fraction &other)
{
    return (num == other.num && den == other.den);
}

// Fraction class friend function

ostream &operator<<(ostream &os, Fraction &fr)
{
    os << fr.num << "/" << fr.den;
    return os;
}




