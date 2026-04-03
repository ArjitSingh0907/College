//Create a class BankAccount with a private balance. 
//Add methods to deposit, withdraw, and check balance.
#include <iostream>
#include <string>
using namespace std;

class bank{
    private:
    long long int balance;
    string pin;

    public:
    bank (long long int balance = 0, string pin = "1021"){
        this -> balance = balance;
        this -> pin = pin;
    }
    void deposit(long long int amount, string code){
        if (code == pin){
            if (amount > 0){
            balance += amount;
            cout << "Amount deposited: " << amount << endl;
        } else {
            cout << "Invalid deposit amount" << endl;
        }
        } else {
            cout << "Invalid PIN" << endl;
        }
    }
    void withdraw(long long int amount, string Code){
        if (Code == pin){
            if (amount > balance){
                cout << "insufficient balance" << endl;
            } else {
                balance -= amount;
                cout << "Amount withdrawn: " << amount << endl;
            }
        } else {
            cout << "Invalid PIN" << endl;
        }
    }
    void checkbalance(string CODE){
        if (CODE == pin){
            cout << "Current balance : " << balance << endl;
        } else {
            cout << "Invalid PIN" << endl;
        }
    }
};
int main(void){
    bank b;
    b.checkbalance("1021");
    b.deposit(5000, "1021");
    b.checkbalance("1021");
    b.withdraw(2000, "1021");
    b.checkbalance("1021");
    return 0;
}