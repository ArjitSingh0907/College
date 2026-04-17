#include <iostream>
#include <string.h>
using namespace std;

class Destroy
{
    public:
    Destroy()
    {
        cout << "Constructor is called..." << endl;
    }
    ~Destroy()
    {
        cout << "Destructor is called here..." << endl;
    }
};

int main(void)
{    
    Destroy d1;
    return 0;
}