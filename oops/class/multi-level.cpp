#include <iostream>
#include <string.h>
using namespace std;

class GrandParents
{
    public:
    void greet_grand()
    {
        cout << "I am ur Grandparent..." << endl;
    }
};
class Parents : public GrandParents
{
    public:
    void greet_parent()
    {
        cout << "I am ur Parent..." << endl;
    }
};
class Child : public Parents
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
    c.greet_grand();
    c.greet_parent();
    c.greet_child();
    return 0;
}