#include <iostream>

using namespace std;

class Point
{
private:
    int x,y;
public:
    void set_x(int new_x);
    void set_y(int new_y);
    int get_x();
    int get_y();
};

int main(void)

{


    Point pt1, pt2;// Create two point objects

    pt1.set_x(10);
    pt1.set_y(43);

    cout << "pt1 is " << pt1.get_x();
    cout << "," << pt1.get_y() << endl;

    pt2.set_x(12);
    pt2.set_y(-5);
    cout << "pt2 is " << pt2.get_x();
    cout << "," << pt2.get_y() << endl;



    return 0;
}

void Point::set_x(int new_x)
{
    if(new_x < 0)
        new_x *= -1;
    x = new_x;

}

void Point::set_y(int new_y)
{
    if(new_y < 0)
        new_y *= -1;

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

