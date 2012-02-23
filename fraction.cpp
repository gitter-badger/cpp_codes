#include <set>
#include <map>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <cctype>
#include <cstdio>
#include <string>
#include <vector>
#include <cassert>
#include <cstdlib>
#include <cstring>
#include <sstream>
#include <iostream>
#include <algorithm>

using namespace std;
struct Fraction
    {
        int numerator;
        int denominator;
    };

float multiply(Fraction obj1, Fraction obj2)
{
    // numerator of the result fraction
    float numerator = obj1.numerator * obj2.numerator;

    // denominator of the result fraction
    float denominator = obj1.denominator * obj2.denominator;

    float result = numerator / denominator;


    return result;
}

int main()
{


    Fraction fr1, fr2;

    cout << "First fraction: "<< endl;

    cout << "Enter numerator: ";
    cin >> fr1.numerator;

    cout << "Enter denominator: ";
    cin >> fr1.denominator;

    cout << "Second fraction: " << endl;

    cout << "Enter numerator: ";
    cin >> fr2.numerator;

    cout << "Enter denominator: ";
    cin >> fr2.denominator;

    cout << multiply(fr1,fr2);


	return 0;
}

