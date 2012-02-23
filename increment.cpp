#include <iostream>

using namespace std;

int main(void)
{

    cout<<"Enter starting point"<<endl;

    int start;

    cin >> start;

    cout<<"Enter ending point"<<endl;
    int end;

    cin >> end;

    cout<<"Address of end: " <<&end <<endl;

    int i;

    cout<<"**********************"<<endl;

    for(i=start;i<=end;i++)
    {
        cout<< i <<endl;
    }

    return 0;
}
