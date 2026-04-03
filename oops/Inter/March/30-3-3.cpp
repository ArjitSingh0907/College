//Implement an object of bank class using dynamic allocation.
//Method 1
#include <iostream>
using namespace std;

class bank{
    public:
    string name;
    int balance;
    void display();
};
void bank :: display(){
    cout << "Name : " << name << endl;
    cout << "Balance : " << balance << endl;
};
int main(void){
    bank *b1 = new bank;
    b1 -> name = "Kotak Mahindra Bank";
    b1 -> balance = 2000000;
    b1 -> display();
    cout << "-----------------------------" << endl;
    bank *b2 = new bank;
    b2 -> name = "HDFC Bank";
    b2 -> balance = 3000000;
    b2 -> display();

    return 0;
}