#include <iostream>
#include <cstring>
#include <fstream>
#include <cstdlib>



using namespace std;

int get_int(int default_value);

int main(void)

{



    char path[] = "C:\\Users\\Majibur Rahman\\cprogramming\\cpp_codes\\";

    char filename[31];

    char fullpath[101];

    int n = 0;

    char model[21];

    char make[21];

    char year[6];

    int mileage;

    int recordsize = sizeof(model) + sizeof(make) + sizeof(year) + sizeof(mileage);

    cout << "Enter filename: ";

    cin.getline(filename,30);

    strcpy( fullpath, strcat(path, filename) );

    // open file for binary write

    fstream fbin(filename,ios::binary | ios::in );


    if(!fbin)
    {
        cout << "Could not open" << filename<< endl;

        return -1;

    }


    cout << "Enter file record number: ";

    n = get_int(0);


    // get data from end user.



    fbin.seekp(n*recordsize);

    fbin.read(model, sizeof(model) - 1);
    fbin.read(make, sizeof(make) - 1);
    fbin.read(year, sizeof(year) - 1);

    fbin.read( (char*)(&mileage), sizeof(int) );

    cout << "Model: " << model <<endl;
    cout << "Make: " << make << endl;

    cout << "Year: " << year << endl;
    cout << "Mileage: " << mileage << endl;

    fbin.close();

    fbin.close();




















	return 0;
}

int get_int(int default_value)
{
    char s[81];
    cin.getline(s,81);

    if(strlen(s) == 0)
        return default_value;
    return atoi(s);


}

