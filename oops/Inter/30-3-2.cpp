//Implement an object of bank class using static allocation.
//Method 2
#include <iostream>
using namespace std;

class bank{
    public:
    string name;
    int accnum;
    long long int balance;

    void details();
};
void bank :: details(){
    cout << "Name : " << name << endl;
    cout << "Acc No : " << accnum << endl;
    cout << "Balance : " << balance << endl;
};
int main(void){
    bank kotak;
    kotak.name = "Kotak Mahindra Bank";
    kotak.accnum = 123456789;
    kotak.balance = 1000000;
    kotak.details();
    return 0;
}