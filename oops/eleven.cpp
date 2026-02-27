#include <iostream>
#include <string>
using namespace std;

class employee
{
    private:
    string name;
    string id;
    long long int salary;

    public:
    void set_default()
    {
        name = "Unknown";
        id = "0";
        salary = 0.0;
    }

    void set_details(void)
    {
        cout << "Enter Name : ";
        cin >> name;
        cout << "Enter ID : ";
        cin >> id;
        cout << "Enter Salary : ";
        cin >> salary;
    }

    void get_details(void)
    {
        cout << name << endl;
        cout << id << endl;
        cout << salary << endl;
    }

    void inc_salary(long long int increment)
    {
        salary += increment;
        cout << "Salary After Increment : " << salary << endl;
    }
};

int main(void)
{
    employee emp;
    emp.set_default();
    emp.set_details();

    long long int inc;
    cout << "Increment of : ";
    cin >> inc;
    emp.inc_salary(inc);

    cout << "Details : " << endl;
    emp.get_details();
    return 0;
}