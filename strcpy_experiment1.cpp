#include <iostream>
#include <string>

#include <cstring>



// purpose of this program is to check
// if strcpy works for string literals

using namespace std;

int main(void)

{

	string fullpath;

	char path[] = "C:\\Users\\Majibur Rahman\\cprogramming\\cpp_codes\\";

	char filename[31];

	cout << "Enter filename: ";

	cin.getline(filename,30);

	fullpath = strcat(path,filename);

	cout << fullpath;







	return 0;
}
