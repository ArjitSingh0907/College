#include <iostream>
#include <string.h>
using namespace std;

class wall
{
    int length, breadth, height;
    public:
    wall()
    {
        length = 35;
        breadth = 45;
        height = 20;
    }
    void display_data()
    {
        cout << "Length: " << length << endl;
        cout << "Breadth: " << breadth << endl;
        cout << "Height: " << height << endl;
        cout << "Dimensions (in m): " << length << " x " << breadth << " x " << height << endl;
    }
};

int main(void)
{
    wall w1;
    w1.display_data();
    return 0;
}