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
    stringstream os;
    int nValue = 1233;
    double dValue = 723.23;

    os << nValue << " " << dValue;

    string strValue1, strValue2;
    os >> strValue1 >> strValue2;

    cout << strValue1 << " " <<strValue2 << endl;

	return 0;
}

