#include <iostream>
#include <string.h>
using namespace std;

class room
{
    public:
    int area(int l, int b)
    {
        return l * b;
    }
    int volume(int l, int b, int h)
    {
        return l * b * h;
    }
};

int main(void)
{
    room r;
    cout << "Area of the room is: " << r.area(10, 20) << endl;
    cout << "Volume of the room is: " << r.volume(10, 20, 30) << endl;
    return 0;
}