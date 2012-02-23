
#include <iostream>

using namespace std;

#define MAX_LEVELS 10

class mystack
{
public:
    int rings[MAX_LEVELS];
    int tos;
    void populate(int size);
    void clear(int size);

    void push(int n);
    int pop(void);

} stacks[3];

void mystack::populate(int size)
{
    for(int i = 0; i <size; i++)
        rings[i] = i+1;

    tos = -1;
}

void mystack::clear(int size)
{
    for(int i = 0; i < size; i++)
    {
        rings[i] = 0;
    }

    tos = -1;
}


void mystack::push(int n)
{
    rings[tos--] = n;
}

int mystack::pop(void)
{
    int n = rings[++tos];
    rings[tos] = 0;
    return n;
}


void move_stacks(int src, int dest, int other, int n);
void move_a_ring(int source, int dest);
void print_stacks(void);
void pr_chars(int ch, int n);


int stack_size = 7;

int main(void)

{

    stacks[0].populate(stack_size);
    stacks[1].clear(stack_size);
    stacks[2].clear(stack_size);

    print_stacks();

    move_stacks(stack_size, 0 , 2 , 1);



    return 0;
}

void move_stacks(int n, int src, int dest, int other)
{
    if(n==1)
        move_a_ring(src, dest);
    else

    {
        move_stacks(n-1, src, other, dest);
        move_a_ring(src, dest);
        move_stacks(n-1, other, dest, src);
    }
}

void move_a_ring(int source, int dest)
{
    int n = stacks[source].pop();
    stacks[dest].push(n);
    print_stacks();
}

void print_stacks(void)
{
    int n = 0;

    int lines = 0;

    for(int i = 0; i < stack_size; i++)
    {
        for(int j = 0; j<3; j++)
        {
            n = stacks[j].rings[i];
            pr_chars(' ', 12 - n);
            pr_chars('*', 2 * n);
            pr_chars(' ', 12 - n);
        }

        cout << endl;

        cout << "Line #" << ++lines << endl;
    }

}

void pr_chars(int ch, int n)
{
    for(int i = 0; i< n; i++)
        cout << (char) ch;
}
