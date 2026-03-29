//Make year private and access it using a setter and getter.
#include <iostream>
using namespace std;
class car{
    private:
    int year;

    public:
    string brand;
    void set_year(int Year){
        year = Year;
    }
    int get_year(){
        return year;
    }
};
int main(void){
    car merc;
    merc.brand = "Mercedes";
    merc.set_year(2027);
    cout << "Brand : " << merc.brand << endl;
    cout << "Year : " << merc.get_year() << endl;
    return 0;
}