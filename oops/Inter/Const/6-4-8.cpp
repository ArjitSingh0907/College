//Create a class Rectangle with overloaded constructors: 
//one default, one parameterized. 
//Show area calculation.
#include <iostream>
using namespace std;

class rectangle{
    private:
    int length, breadth;

    public:
    rectangle(){
        length = 0;
        breadth = 0;
        cout << "Area :" << length * breadth << endl;
        cout << "Default Constructor called!" << endl;
    }
    rectangle(int l, int b){
        length = l;
        breadth = b;
        cout << "Area : " << length * breadth << endl;
        cout << "Parameterized Constructor called!" << endl;
    }
    ~rectangle(){
        cout << "Rectangle class and object destroyed!" << endl;
    }
};
int main(void){
    rectangle r0;
    rectangle r1(20,30);
    return 0;
}