#include <iostream>
#include <cstring>
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
    void display(){
        cout << "The number is: " << a << endl;
    }
};
int main(void){
    number x, y(10), z;
    x.display();
    y.display();
    z.display();
    return 0;
}