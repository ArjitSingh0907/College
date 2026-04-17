#include <iostream>
using namespace std;

class room
{
    public:
    void calculate(int l, int b, int h)
    {
        cout << "Area of the room is: " << l * b << endl;
        cout << "Volume of the room is: " << l * b * h << endl;
    }
};
int main(void)
{
    room r;
    r.calculate(10, 20, 30);
    return 0;
}