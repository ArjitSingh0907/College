//shallow copy
//for a person's name and age

#include <iostream>
#include <string.h>
using namespace std;

class person{
    public:
    int age;
    char *name;

    person(int age, const char *name){
        this -> age = age;
        this -> name = new char[strlen(name) + 1];
        strcpy(this -> name, name);
    }
};
int main(void){
    person p1(20, "Alice");
    person p2 = p1; //here shallow copy is executed, p2.name will point the same as p1.name.
    p2.age = 30;
    p1.name = "Bob"; //this will change the name of p1, but name of p2 remains the same as initialised to p1.

    cout << p1.name << " " << p2.name << endl;
    cout << p1.age << " " << p2.age << endl;
}