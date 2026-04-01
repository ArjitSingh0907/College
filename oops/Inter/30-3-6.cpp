//Create a class with heap object allocation.
//Method 2
#include <iostream>
using namespace std;

class car{
    public:
    string model;
    int year;
    void input();
    void display();
};
void car :: input(){
        cout << "Enter Model : ";
        cin >> model;
        cout << "Enter Year : ";
        cin >> year;
};
void car :: display(){
    cout << "Model : " << model << endl;
    cout << "Year : " << year << endl;
};
int main(void){
    car *c = new car;
    c -> input();
    c -> display();
    return 0;
}