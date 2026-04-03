//Add a function display() inside Car to print details.
#include <iostream>
using namespace std;

class car{
    public:
    string brand;
    int year;

    void display(){
        cout << "Brand : " << brand << endl;
        cout << "Year : " << year << endl;
    }
};
int main(void)
{
    car merc;
    merc.brand = "Mercedes";
    merc.year = 2026;
    merc.display();
    return 0;
}