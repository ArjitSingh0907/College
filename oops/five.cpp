#include <iostream>
#include <string>
using namespace std;

class BankAccount 
{
private:
    int accountNumber;
    double balance;

public:
    BankAccount(int accNo, double i_Balance) 
    {
        accountNumber = accNo;
        balance = i_Balance;
    }

    void deposit(double amount) 
    {
        if (amount > 0) 
        {
            balance += amount;
            cout << "Deposited: " << amount << endl;
        } 
        else 
        {
            cout << "Invalid deposit amount!" << endl;
        }
    }

    void withdraw(double amount) 
    {
        if (amount > 0 && amount <= balance) 
        {
            balance -= amount;
            cout << "Withdrawn: " << amount << endl;
        } 
        else 
        {
            cout << "Insufficient funds or invalid amount!" << endl;
        }
    }

    double getBalance() 
    {
        return balance;
    }
};

int main(void) 
{
    BankAccount acc1(101, 5000);

    acc1.deposit(1000);
    acc1.withdraw(2000);

    cout << "Current Balance: " << acc1.getBalance() << endl;

    return 0;
}