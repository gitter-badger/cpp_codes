#include <iostream>

using namespace std;

int main(void)

{

	int sum = 0;
	int  n = 0;

	cout << "Enter number of itmes: ";
	cin >> n;

	int *p = new int[n]; // Allocate n integers

	for(int i = 0; i < n; i++)
	{
	    cout << "Enter item #" << i <<": ";
	    cin >> p[i];
	    sum += p[i];
	}

	cout << "here are the items: ";
	for(int i =0; i < n; i++)
        cout << p[i] << ",";
    cout << endl;

    cout << "Total is: " << sum << endl;

    cout << "The average: " << (double) sum/n
    << endl;

    delete [] p; // Release n integers.






	return 0;
}
