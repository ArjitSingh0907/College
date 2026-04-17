#include <iostream>
#include <string.h>
using namespace std;

class room
{
    int l, b, h;
    public:
    void set_data(int length, int breadth, int height)
    {
        l = length;
        b = breadth;
        h = height;
    }
    void calculate()
    {
        cout << "Area of the room is: " << l * b << endl;
        cout << "Volume of the room is: " << l * b * h << endl;
    }
};

int main(void)
{
    room r;
    r.set_data(10, 20, 30);
    r.calculate();
    return 0;
}