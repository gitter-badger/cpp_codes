#include <iostream>

using namespace std;

class Point
{
private:
    int x,y;
public:
    void set(int new_x, int new_y);
    int get_x();
    int get_y();
};

int main(void)

{


    Point pt1, pt2;// Create two point objects

    pt1.set(125, 20);
    cout << "pt1 is " << pt1.get_x();
    cout << "," << pt1.get_y() << endl;

    pt2.set(-5, 109);
    cout << "pt2 is " << pt2.get_x();
    cout << "," << pt2.get_y() << endl;



    return 0;
}

void Point::set(int new_x, int new_y)
{
    if(new_x > 100)
        new_x = 100;
    if(new_y > 100)
        new_y = 100;

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
