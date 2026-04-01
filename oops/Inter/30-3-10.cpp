//Demonstrate memory leak with class object.
#include <iostream>
using namespace std;

class bike{
    public:
    string name;
    int price;
    bike(){
        cout << "Constructor called" << endl;
    }
    ~bike(){
        cout << "Destructor called" << endl;
    }
};
int main(void){
    bike *d = new bike;
    //delete d; // Memory leak occurs as destructor is not called...
    return 0;
}