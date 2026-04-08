//deep copy
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
    person(const person &p){
        this -> age = p.age;
        this -> name = new char[strlen(p.name) + 1];
        strcpy(this -> name, p.name);
    }
};
int main(void){
    person p1(19, "Sony");
    person p2(p1);
    p2.age = 20;
    p2.name[0] = 'T';

    cout << p1.name << " " << p2.name << endl;
    cout << p1.age << " " << p2.age << endl;
    return 0;
}