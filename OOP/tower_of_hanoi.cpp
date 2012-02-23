#include <iostream>
#include <cstdlib>

using namespace std;

void move_rings(int n, int src, int dest, int other);

int main(void)

{

	int n = 3; // Stack 3 rings high

	move_rings(n,1,3,2);









	return 0;
}

void move_rings(int n, int src, int dest, int other)
{
    if(n==1)
    {
        cout << "Move from " << src << " to " << dest << endl;

    }

    else
    {
        move_rings(n-1, src, other, dest);
        cout<< "Move from" << src << " to " << dest << endl;

        move_rings(n-1, other, dest, src);
    }
}
