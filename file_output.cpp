#include <iostream>

#include <fstream>

using namespace std;

int main(void)

{

    char file_name[100];

	cout << "Enter a filename and press enter : ";

	cin.getline(file_name,99);

	ofstream message(file_name);

	if(!message)
	{
	    cout << "Could not be opened." << endl;

	    return -1;
	}

	cout << file_name << " was opened" << endl;

	message << "I am good. " << endl;

	message << "I know that. " << endl;

	message.close();

	return 0;








	return 0;
}
