#include <iostream>
#include <cstring>

using namespace std;

class String
{
private:
    char *ptr;
public:
    String();
    String(char *s);
    ~String();

    operator char*()
    {
        return ptr;
    }
    int operator==(const String &other);


};

int main(void)

{

    String a("String 1");
    String b("String 2");

    cout << "The value of a: " << endl;

    cout << a << endl;

    cout << "The value of b: " << endl;
    cout << b << endl;



    return 0;
}

String::String()
{
    ptr = new char[1];
    ptr[0] = '\0';
}

String::String(char *s)
{
    int n = strlen(s);
    ptr = new char[n+1];
    strcpy(ptr,s);
}

String::~String()
{
    delete [] ptr;
}

int String::operator==(const String &other)
{
    return (strcmp(ptr, other.ptr) == 0);
}
