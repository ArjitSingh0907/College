#include <iostream>
using namespace std;

class animal
{
    public:
    virtual void show()
    {
        cout << "Animal speaks..." << endl;
    }
};

class dog : public animal
{
    public:
    void show()
    override
    {
        cout << "Barking...!" << endl;
    }
};
int main(void)
{
    animal *a;
    dog d;
    a = &d;
    a->show();
    return 0;
}