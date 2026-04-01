//Demonstrate constructor and destructor calls for stack object.
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
    demo d1;
    return 0;
}