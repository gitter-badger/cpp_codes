#include <iostream>
#include <cstring>

using namespace std;

int main(void)

{

	char path[] = "C:\\Users\\Majibur Rahman\\cprogramming\\cpp_codes\\";

	char fullpath[101];

	char filename[31];

	cout<< "Enter filename: ";

	cin.getline(filename,30);

	strcpy( fullpath, strcat(path,filename) );

	cout<< fullpath << endl;





	return 0;
}
