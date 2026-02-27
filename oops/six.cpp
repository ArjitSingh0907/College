#include <iostream>
#include <string>
using namespace std;

class Person
{
    protected:
    int age;

    public:
    void setage(int x)
    {
        age = x;
    }
};

class Employee : public Person
{
    public:
    string name;
    void check_age() 
    {
        if (age < 60) 
        {
            cout << "Not Eligible!" << endl;
        } 
        else 
        {
            cout << "Eligible!" << endl;
        }
    }
};

int main(void)
{
    Employee emp;
    cout << "Enter name : ";
    cin >> emp.name;
    cout << "Enter age : ";
    int x;
    cin >> x;
    emp.setage(x);
    emp.check_age();
    return 0;
}