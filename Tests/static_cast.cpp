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

int main()
{
    float f = 4.5f;
    int d = (int) f;

    cout << d << endl;
    cout << f << endl;

    cout << "doing static cast..."<< endl;
    d = static_cast<int> (f);
    cout << d << endl;
    cout << f << endl;

	return 0;
}
