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
	int nValue = 5;
	int *const pnValue = &nValue;

	int &rnValue = nValue;

	*pnValue = 89;

    cout << *pnValue << endl;

	rnValue = 78234;

// if printed cout << *pnValue << endl; here it would produce 78234
	cout << rnValue << endl;

	return 0;
}

