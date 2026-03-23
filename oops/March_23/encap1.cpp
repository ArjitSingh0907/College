#include <iostream>
#include <string.h>
using namespace std;

class Car
{
    private:
    string brand;
    int speed;

    public:
    void setBrand(string b)
    {
        brand = b;
    }
    void setSpeed(int s)
    {
        speed = s;
    }
    string getBrand()
    {
        return brand;
    }
    int getSpeed()
    {
        return speed;
    }
};
int main(void)
{
    Car car1;
    car1.setBrand("Mercedes");
    car1.setSpeed(220);
    cout << "Car Brand : " << car1.getBrand() << endl;
    cout << "Car Speed : " << car1.getSpeed() << "km/hr" << endl;
    return 0;
}