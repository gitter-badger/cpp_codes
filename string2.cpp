#include <iostream>

#include <cstring>

using namespace std;

int main(void)

{

    string str, name, address, work;


    cout << "Enter name and press ENTER: ";
    getline(cin, name);

    cout << "Enter address: ";

    getline(cin, address);

    cout << "Enter workplace: ";

    getline(cin, work);

    str = "\nMy name is " + name + ", "
          + "I live at " + address + ",\nand I work at " + work + ".\n";



    cout << str <<endl;





    return 0;
}
