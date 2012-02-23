#include <iostream>
#include <vector>
using namespace std;

int main ()
{
    // multidimentional vector
    vector< vector< int > > V2D;
    // the above is basically a vector where each element is a vector,
    // we can also increase the level of nesting if needed.

    // demonstrate a triangular structure..
    vector< int > temp;
    for(int i = 0; i < 10; i++)
    {
        temp.clear();
        for(int j = 0; j <= i; j++)
        {
            temp.push_back(i+1);
        }
        V2D.push_back(temp);
    }

    for(unsigned i = 0 ; i <V2D.size(); i++)
    {
        for (unsigned j = 0 ; j <V2D[i].size(); j++)
        {
            cout<< V2D[i][j] << " " ;
        }
        cout << endl;
    }
    return 0;
}
