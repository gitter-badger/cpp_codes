#include <iostream>

using namespace std;

class Point
{
    private:
        int x, y;
    public:
        // constructors

        Point() { x = 0; y = 0;} // Default Constructor
        Point(int new_x, int new_y){ set(new_x, new_y);}

        //Other member functions
        void set(int new_x, int new_y);
        int get_x();
        int get_y();


};

int main(void)

{

	Point pt1, pt2;
	Point pt3(5, 10);

	cout << "The value of pt1 is: ";
	cout << pt1.get_x() << ",";
	cout << pt2.get_y() << endl;

	cout << "The value of pt2 is: ";
	cout << pt2.get_x() << ",";
	cout << pt2.get_y() << endl;

	cout << "The value of pt3 is: ";
	cout << pt3.get_x() << ",";
	cout << pt3.get_y() << endl;



	return 0;
}

void Point::set(int new_x, int new_y)
{
    if(new_x < 0)
    {
        new_x *= -1;
    }

    if(new_y < 0)
    {
        new_y *= -1;
    }

    x = new_x;
    y = new_y;
}

int Point::get_x()
{
    return x;

}

int Point::get_y()
{
    return y;
}
