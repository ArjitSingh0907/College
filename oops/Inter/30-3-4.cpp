//Implement an object of bank class using dynamic allocation.
//Method 2
#include <iostream>
using namespace std;

class bank{
    public:
    string name;
    int balance;
    void input(bank *b1){
        cout << "Enter Name : ";
        cin >> b1 -> name;
        cout << "Enter Balance : ";
        cin >> b1 -> balance;
    }
    void display();
};
void bank :: display(){
    cout << "Name : " << name << endl;
    cout << "Balance : " << balance << endl;
};
int main(void){
    bank *b1 = new bank;
    b1 -> input(b1);
    b1 -> display();
    return 0;
}