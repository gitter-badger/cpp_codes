#include <iostream>
#include <string>
#include <sstream>
using namespace std;

string output_formatted_string(long long num);



int main(void)

{



    string s = output_formatted_string(88123000567001LL);
    cout << s << endl;



	return 0;
}

#define GROUP_SEP ','
#define GROUP_SIZE 3

string output_formatted_string(long long num)
{
    // read data into string

    stringstream temp, out;

    temp << num;

    string s = temp.str();

    // write first characters, in front of
    // first seperator (GROUP_SEP)

    int n = s.size() % GROUP_SIZE;

    cout << "[n:1: ]" << n << endl;

    int i = 0;


    if (n > 0 && s.size() > GROUP_SIZE)
    {
        out << s.substr(i,n) << GROUP_SEP;
        i += n;
    }

    // Handle all the remaining groups.

    n = s.size() / GROUP_SIZE - 1;


    cout << "[n:2: ]" << n << endl;


    while(n-- > 0)
    {
        out << s.substr(i, GROUP_SIZE) << GROUP_SEP;
        i += GROUP_SIZE;
    }

    out << s.substr(i); // write the rest of the digits.
    return out.str(); // convert stream --> string.





}
