//Create two objects of Car and assign different values.
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
    car audi;
    merc.brand = "Mercedes";
    merc.year = 2026;
    audi.brand = "Audi";
    audi.year = 2025;
    merc.display_details();
    audi.display_details();
    return 0;
}