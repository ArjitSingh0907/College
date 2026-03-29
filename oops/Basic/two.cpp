#include <iostream>
#include <string>
using namespace std;

class student
{
    public:
    string name;
    int roll;
    string stream;
    string section;

    private:
    double fees;
};

class account
{   
    private:
    string id;
    int fees;

    public:
    string name;
    string due;

    void setacc(string x, int y)
    {
        id = x;
        fees = y;
    }

    string getacc()
    {
        return id + "|" + to_string(fees);
    }
};

int main(void)
{
    student s1;
    account a1;

    s1.name = "Arjit";
    s1.roll = 6;
    s1.stream = "Science";
    s1.section = "C";
    a1.setacc("AX3471", 12500);

    cout << "Name of Student : " << s1.name << endl;
    cout << "Id | Fees : " << a1.getacc() << endl; 
    
    return 0;
}