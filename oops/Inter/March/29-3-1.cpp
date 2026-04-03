// Write a class Car with two data members: brand and year. Create an object and print its values.
#include <iostream>
using namespace std;

class car
{
public:
    string brand;
    int year;
};
int main(void)
{
    car merc;
    merc.brand = "Mercedes";
    merc.year = 2026;
    cout << "Brand : " << merc.brand << endl;
    cout << "Year : " << merc.year << endl;
    return 0;
}