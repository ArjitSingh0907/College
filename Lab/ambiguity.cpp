//Resolve Ambiguity using Virtual Base Class
#include <iostream>
using namespace std;

class Student 
{
public:
    int roll;
    void setRoll(int r) 
    { 
        roll = r; 
    }
};

class Test : virtual public Student 
{
public:
    void showTest() 
    { 
        cout << "Test marks recorded.\n"; 
    }
};

class Sports : virtual public Student 
{
public:
    void showSports() 
    { 
        cout << "Sports marks recorded.\n"; 
    }
};

class Result : public Test, public Sports 
{
public:
    void display() 
    {
        cout << "Roll Number: " << roll << endl;
    }
};

int main(void)
{
    Result r;
    r.setRoll(101);
    r.display();
    cout << "Arjit Singh" << endl;
    cout << "A50105225074" << endl;
    return 0;
}
