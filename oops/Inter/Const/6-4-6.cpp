//Create a class Student with a constructor that initializes : 
//name and roll number, 
//and a destructor that prints a message when the object is destroyed using pointers.
#include <iostream>
#include <string.h>
using namespace std;

class student{
    private:
    int fees;
    public:
    string name;
    int roll;

    student(string n, int f, int r){
        name = n;
        fees = f;
        roll = r;
    }
    void getdetails(){
        cout << "Name: " << name << endl;
        cout << "Fees: " << fees << endl;
        cout << "Roll number: " << roll << endl;
    }
    ~student(){
        cout << "Object destroyed" << endl;
    }
};
int main(void){
    student *s = new student("Peter Parker", 50000, 10);
    s -> getdetails();
    delete s;
    return 0;
}