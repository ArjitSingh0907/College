#include <iostream>
using namespace std;

class parent
{
    public:
    void display_parent()
    {
        cout << "This is a parent class function!" << endl;
    }
};
class child1 : public parent
{
    public:
    void display_child1()
    {
        cout << "This is a child1 class function!" << endl;
    }
};
class child2 : public parent
{
    public:
    void display_child2()
    {
        cout << "This is a child2 class function!" << endl;
    }
};
int main(void)
{
    child1 c1;
    child2 c2;
    c1.display_child1();
    c2.display_child2();
    return 0;
}