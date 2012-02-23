#include <iostream>

#include <string>

using namespace std;

int main(void)
{
    string prompt = "Enter your name: ";

    string name;

    cout << prompt;
    cin >> name; // using the stream operator for inputting string has drawback

    // it stores characters until the first space

    cout << "Your name is : " << name;
}
