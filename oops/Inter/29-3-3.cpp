//Define display() outside the class using scope resolution.
#include <iostream>
using namespace std;

class car{
    public:
    string brand;
    int year;
    void display_details();
};
void car :: display_details(){
    cout << "Brand : " << brand << endl;
    cout << "Year : " << year << endl;
};
int main(void)
{
    car merc;
    merc.brand = "Audi";
    merc.year = 2025;
    merc.display_details();
    return 0;
}