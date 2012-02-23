#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <cctype>
#include <string>
#include <cstring>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;

void swap(int arr[],int address1, int address2);

int main(void)

{
	int arr[11];

	cout << "Enter 10 numbers: ";

	for(int i = 0; i<7; i++)
	{cin >> arr[i];}

	//swap(arr,1,4);
	int minIndex;
	for(int i = 0; i < 6; i++)
	{
	    for(int j = i, int minvalue = arr[j]; j<7;j++)
	    {
	        if(arr[j] < minvalue)
	        {
	            minvalue = arr[j+1];
	            minIndex = j+1;
	        }

	    }
	    swap(arr, i, minIndex);
	}

	for(int i = 0; i<7;i++)
	{
	    cout << arr[i] << " ";

	}





	return 0;
}

void swap(int arr[], int address1, int address2)
{
    int temp;
    temp = arr[address1];
    arr[address1] = arr[address2];
    arr[address2] = temp;

}
