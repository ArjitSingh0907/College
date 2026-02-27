#include <iostream>
using namespace std;

class Student
{
    public:
    void sget_details(void)
    {
        cout << "Basic Details." << endl;
        cout << "A Student." << endl;
        cout << "----------------" << endl;
    }
};
class Athlete
{
    public:
    void aget_details(void)
    {
        cout << "Athlete Details." << endl;
        cout << "An Athlete." << endl;
        cout << "----------------" << endl;
    }
};
class Person : public Student, public Athlete
{
    public:
    void display_details(void)
    {
        cout << "The person is an Atheltic Student." << endl;
    }
};
int main(void)
{
    Person p;
    p.sget_details();
    p.aget_details();
    p.display_details();
    return 0;
}