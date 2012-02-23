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
        String(const String &src);
        ~String();

        String& operator=(const String &src)
        {
            cpy(src.ptr); return *this;
        }

        String operator+(char *s);
        int operator==(const String &other);
        operator char*() {return ptr;}

        void cat(char *s);
        void cpy(char *s);




};

int main(void)

{

	String a, b, c;
	a = "I ";
	b = "am ";
	c = "so ";
	String d = a + b + c + "very happy!\n";
	cout << d;






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

String::String(const String &src)
{
    int n = strlen(src.ptr);
    ptr = new char[n+1];
    strcpy(ptr, src.ptr);

}

String::~String()
{
    delete [] ptr;
}

int String:: operator==(const String &other)
{
    return (strcmp(ptr, other.ptr) == 0);

}

String String::operator+(char *s)
{
    String new_str(ptr);
    new_str.cat(s);
    return new_str;
}

void String::cpy(char *s)
{
    delete [] ptr;
    int n = strlen(s);
    ptr = new char[n+1];
    strcpy(ptr,s);
}

void String::cat(char *s)
{
    int n = strlen(ptr) + strlen(s);
    char *p1 = new char[n+1];

    strcpy(p1, ptr);
    strcat(p1,s);

    delete [] ptr;
    ptr = p1;
}
