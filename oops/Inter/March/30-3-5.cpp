//Create a class with heap object allocation.
#include <iostream>
using namespace std;

class car{
    public:
    string model;
    int year;
};
int main(void){
    car *c = new car;
    c -> model = "BMW";
    c -> year = 2027;
    cout << "Model : " << c -> model << endl;
    cout << "Year : " << c -> year << endl;
    return 0;
}