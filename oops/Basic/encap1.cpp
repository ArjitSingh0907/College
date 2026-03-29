#include <iostream>
#include <string.h>
using namespace std;

class Bank
{
    private:
    string AccNo;
    long long int balance = 102570000;

    public:
    string name;
    int age;

    void deposit(double amount)
    {
        if(amount > 0)
        {
            balance += amount;
            cout << balance << endl;
        }
    }
};
int main(void)
{
    int x;
    Bank b1;
    cout << "Enter Amount : " << endl;
    cin >> x;
    b1.deposit(x);
    return 0;
}