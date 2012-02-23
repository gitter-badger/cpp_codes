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

class StankFist
{
public:
    StankFist()
    {
        stinkyVar = 0;
    }
private:
    int stinkyVar;

    friend void stankysFriend(StankFist &sfo);
};

void stankysFriend(StankFist &sfo)
{
    sfo.stinkyVar = 99;
    cout << sfo.stinkyVar << endl;
}

int main()
{
    StankFist bob;
    stankysFriend(bob);

    return 0;
}

