#include <iostream>
#include <string.h>
using namespace std;

class wall
{
    int l, b, h;
    public:
    wall(int length, int breadth, int height)
    {
        l = length;
        b = breadth;
        h = height;
    }
    void display()
    {
        cout << "Dimensions of the wall are: " << l << " x " << b << " x " << h << endl;
        cout << "Volume of the wall is: " << l * b * h << endl;
    }
};

int main(void)
{
    wall w1(10, 20, 30);
    w1.display();
    return 0;
}