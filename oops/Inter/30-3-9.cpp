//Demonstrate constructor and destructor calls for heap object
#include <iostream>
using namespace std;

class demo{
    public:
    demo(){
        cout << "Constructor called" << endl;
    }
    ~demo(){
        cout << "Destructor called" << endl;
    }
};
int main(void){
    demo *d = new demo;
    delete d;
    return 0;
}