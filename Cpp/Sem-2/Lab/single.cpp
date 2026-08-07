#include <iostream>
#include <string.h>
using namespace std;

class Student
{
    public:
    void greet()
    {
        cout << "Hello, I am a student." << endl;
    }
};
class Athelete
{
    public:
    void greet()
    {
        cout << "Hello, I am an athlete." << endl;
    }
};
int main(void)
{
    Student s1;
    Athelete a1;
    s1.greet();
    a1.greet();
    return 0;
}