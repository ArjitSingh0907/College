#include <iostream>
using namespace std;
class number{
    int a;
    public:
    number(){
        a = 0;
    }
    number(int num){
        a = num;
    }
    // if copy constructor is not defined, compiler will create a default copy constructor which will do shallow copy.
    number(number &obj){
        cout << "Copy constructor called" << endl;
        a = obj.a;
    }
    void display(){
        cout << "The number is: " << a << endl;
    }
};
int main(void){
    number x(10), y(5), z(0);
    x.display();
    y.display();
    z.display();
    number z1(x);
    z1.display();
    return 0;
}