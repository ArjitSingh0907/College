//Implement an object of bank class using static allocation.
//Method 1
#include <iostream>
using namespace std;

class bank{
    public:
    string name;
    int accnumber;
    long long int balance;
    void input(){
        cout << "Enter Name : ";
        cin >> name;
        cout << "Enter AccNo : ";
        cin >> accnumber;
        cout << "Enter Balance : ";
        cin >> balance;
    }
    void display(bank b);
};
void bank :: display(bank b){
    cout << "Name : " << b.name << endl;
    cout << "AccNo : " << b.accnumber << endl;
    cout << "Balance : " << b.balance << endl;
};
int main(void){
    bank b1;
    b1.input();
    b1.display(b1);
    return 0;
}