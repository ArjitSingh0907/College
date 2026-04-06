//Create a class Student with a constructor that :
//initializes name and roll number, 
//and a destructor that prints a message when the object is destroyed.

#include <iostream>
#include <string.h>
using namespace std;

class student{
    private:
    char * name;
    int rollnum;

    public:
    student(char * n, int r){
        name = new char[strlen(n) + 1];
        strcpy(name, n);
        rollnum = r;
    }
    void getdetails(){
        cout << "Name : " << name << endl;
        cout << "Roll Number : " << rollnum << endl;
    }
    ~student(){
        cout << "Destructor is called!" << endl;
    }
};
int main(void){
    student s("Peter Parker", 73126);
    s.getdetails();
    return 0;
}