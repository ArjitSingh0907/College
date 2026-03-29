#include <iostream>
#include <string>
using namespace std;

class Teacher
{
public:
    //Properties
    string name;
    string dept;
    string subject;
    string salary;

    //Methods
    void changedept(string newdept)
    {
        dept = newdept;
    }
};

int main(void)
{
    Teacher t1;
    t1.name = "Arjit";
    t1.dept = "Computer Science";
    t1.subject = "Oops";
    t1.salary = "54lpa";  

    cout << t1.name << endl;
    cout << t1.subject << endl;
    cout << t1.dept << endl;
    cout << t1.salary << endl;
    return 0;
}