#include <iostream>
#include <vector>



using namespace std;





vector<int> v(3);            // Declare a vector of 3 elements.
      v[0] = 7;
      v[1] = v[0] + 3;
      v[2] = v[0] + v[1];
                // v[0] == 7, v[1] == 10, v[2] == 17
int main(void)

{
	cout << v;

    reverse(v.begin(), v.end()); // v[0] == 17, v[1] == 10, v[2] == 7

    for(int i = v.begin(); i<v.end(); i++)
    {
        cout << v[i] << endl;
    }

	return 0;
}
