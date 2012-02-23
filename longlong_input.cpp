#include <iostream>
#include <string>


#define GROUP_SEP ','

long long read_formatted_input(string s)
{
    for (int i = 0; i< s.size(); i++)
    {
        if(s[i] == GROUP_SEP)
            s.erase(i,1);
    }

    return atoll(s.c_str())
}

using namespace std;

int main(void)

{







	return 0;
}
