//Display Name & Roll using Virtual Functions
#include <iostream>
using namespace std;

class Student 
{
public:
    virtual void display() 
    {
        cout << "Student details.\n";
    }
};

class Info : public Student 
{
    string name;
    int roll;
    
    public:
    Info(string n, int r) : name(n), roll(r) {}
    void display() override 
    {
        cout << "Name: " << name << ", Roll: " << roll << endl;
    }
};

int main(void) {
    Student *s;
    Info i("Arjit", 101);
    s = &i;
    s->display();
    return 0;
}
