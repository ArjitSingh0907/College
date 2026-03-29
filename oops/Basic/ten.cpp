#include <iostream>
#include <string>
using namespace std;

class student
{
    public:
    string name;
    string roll;
    string marks;

    void set_default()
    {
        name = "Unknown";
        roll = "0";
        marks = "0";
    }

    void set_details(void) 
    {
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Roll_No: ";
        cin >> roll;
        cout << "Enter Marks: ";
        cin >> marks;
    }


    void get_details(void) 
    {
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << roll << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main(void)
{
    student s;
    s.set_default();
    s.set_details();
    cout << "Details : " << endl;
    s.get_details();
    return 0;
}