//Create a class with heap object allocation.
#include <iostream>
using namespace std;

class student{
    public:
    string name;
    int roll;
    void input(){
        cout << "Enter Name : ";
        cin >> name;
        cout << "Enter Roll : ";
        cin >> roll;
    }
    void display(){
        cout << "Name : " << name << endl;
        cout << "Roll : " << roll << endl;
    }
};
int main(void){
    student *s = new student;
    s -> input();
    s -> display();
    return 0;
}