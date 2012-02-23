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

struct Advertising
{
    int number_of_ads;
    float click_rate;
    float average_earning_per_click;


};

void printAdInfo(Advertising ad)
{
    cout << "No. of ads shown today: " << ad.number_of_ads << endl;
    cout << "Click through rate: " << ad.click_rate << endl;
    cout << "Average earnings per click: $" << ad.average_earning_per_click << endl;

    cout << "Total earning: $" <<
    (ad.number_of_ads * ad.click_rate * ad.average_earning_per_click) << endl;
}




int main()
{
    Advertising Ad;

    cout << "How many ads were shown today? ";
    cin >> Ad.number_of_ads;

    cout << "What was the click through rate? ";
    cin >> Ad.click_rate;

    cout << "What was the average earnings per click? ";
    cin >> Ad.average_earning_per_click;

    cout << endl << endl;

    printAdInfo(Ad);

	return 0;
}

