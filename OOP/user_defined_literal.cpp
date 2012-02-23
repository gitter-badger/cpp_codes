#include <cstring>

#include <cstdlib>

Fraction operator "r" (const char *s)
{
    int n = 0;
    int d = 1;

    char *p1 = strtok(s, "_");
    char *p2 = strtok(nullptr, "_");

    if(p1)
        n = atoi(p1);

    if(p2)
        d = atoi(p2);

    return Fraction(n,d);
}
