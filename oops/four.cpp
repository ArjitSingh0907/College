#include <iostream>
#include <string>
using namespace std;

class Student
{
    private:
    string name;
    string rollNumber;

    public:
    void setData(string x, string y)
    {
        name = x;
        rollNumber = y;
    }

    void displayData()
    {
        cout << "Name - " << name << endl;
        cout << "Roll Number - " << rollNumber << endl;
    }
};

int main(void)
{
    Student s;
    string x, y;

    cout << "Enter Student's Name : " << endl;
    cin >> x;
    cout << "Enter Roll Number : " << endl;
    cin >> y;
    s.setData(x,y);
    s.displayData();
    return 0;
}