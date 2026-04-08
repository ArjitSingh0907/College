//where both copy and assignment operator are used...
#include <iostream>
#include <cstring>
using namespace std;

class person{
    public:
    int age;
    char *name;
    
    //parameterized constructor
    person(int age, const char *name){
        this -> age = age;
        this -> name = new char[strlen(name) + 1];
        strcpy(this -> name, name);
    }

    //copy constructor (deep copy)
    person(const person &p){
        this -> age = p.age;
        this -> name = new char[strlen(p.name) + 1];
        strcpy(this -> name, p.name);
        cout << "Copy constructor called" << endl;
    }

    //assignment operator (deep copy)
    person & operator = (const person &p){
        if (this != &p){
            this -> age = p.age;
            delete [] this -> name;
            name = new char[strlen(p.name) + 1];
            strcpy(this -> name, p.name);
            cout << "Assignment operator called" << endl;
        }
        return *this;
    }

    // destructor called
    ~person(){
        delete [] name;
    }
};
int main(void){
    person p1(19, "Sony");

    //copy example
    person p2(p1);
    cout << p1.name << " - " << p2.name << endl;

    //assignment example
    person p3(20, "Tony");
    p3 = p1;
    cout << p1.name << " - " << p3.name << endl;
    return 0;
}