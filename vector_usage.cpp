#include <iostream>
#include <vector>

using namespace std;

int main(void)

{
	vector<int> first;
	vector<int> second(4,100);
	vector<int> third(second.begin(),second.end());
	vector<int> fourth(third);

	int myints[] = {16, 2, 77, 29};

	vector<int> fifth(myints, myints + sizeof(myints) / sizeof(int));


	cout << "Contents of second: ";
	for(unsigned i=0;i < second.size() ; i++)
	{
	    cout << second[i] << endl;
	}

    cout << endl;

	cout << "The contents of fifth are:";
	for(unsigned i = 0; i<fifth.size(); i++)
	{
	    cout << fifth[i] << endl;

	}


	return 0;
}
