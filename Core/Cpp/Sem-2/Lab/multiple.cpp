#include <iostream>
#include <string.h>
using namespace std;

class Mother
{
    public:
    void greet_mother()
    {
        cout << "I am ur Mother..." << endl;
    }
};
class Father
{
    public:
    void greet_father()
    {
        cout << "I am ur Father..." << endl;
    }
};
class Child : public Mother, public Father
{
    public:
    void greet_child()
    {
        cout << "And this is me..." << endl;
    }
};
int main(void)
{
    Child c;
    c.greet_mother();
    c.greet_father();
    c.greet_child();
    return 0;
}