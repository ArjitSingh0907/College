#include <iostream>
using namespace std;

class Animal
{
    public:
    void eat(void)
    {
        cout << "Eating Time." << endl;
    }
    void sleep(void)
    {
        cout << "Sleeping Time." << endl;
    }
};
class Dog : public Animal
{
    public:
    void bark(void)
    {
        cout << "Barking!" << endl;
    }
};
int main(void)
{
    Dog d1;
    d1.eat();
    d1.sleep();
    d1.bark();
    return 0;
}