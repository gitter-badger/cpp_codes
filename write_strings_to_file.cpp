#include <iostream>

#include <fstream>

#include <cstring>

using namespace std;

int main(void)

{
    char path[61];

    char filename[31];

    char full_path[91];

    char line[81];

    string fullpath;

	cout << "Enter directory path: ";

	cin.getline(path,60);

	cout << "Enter filename: ";

	cin.getline(filename,30);


    fullpath =

	strcpy( full_path, strcat( strcat(path,"\\" ), filename ) );


	ofstream text_file(full_path);

	cout << "Enter text:" << endl;

	while(true)
	{cin.getline(line,80);

	if(! (strlen(line)) ) // equivalent to (if (strlen(line)) == 0)
        break;

    text_file << line ;


	}

	text_file.close();











	return 0;
}
