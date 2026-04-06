//Constructor - 1
#include <iostream>
using namespace std;

class Bank{
    private:
    string accno;
    string name;
    long long int balance;

    public:
    Bank(){
        accno = "1234567890";
        name = "John Doe";
        balance = 100000000;
    }

    void getbalance(){
        cout << "Account Number : " << accno << endl;
        cout << "Name : " << name << endl;
        cout << "Balance : " << balance << endl;
    }
};
int main(void){
    Bank b;
    b.getbalance();
    return 0;
}