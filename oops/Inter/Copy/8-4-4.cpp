//shallow - 4
//using method 1 and trying to change p1's name will change p2's name.
#include <iostream>
#include <string.h>
using namespace std;

class person{
    public:
    int age;
    char * name;

    person(int age, const char * name){
        this -> age = age;
        this -> name = new char[strlen(name)+1];
        strcpy(this -> name, name);
    }
};
int main(void){
    person p1(21, "Peter");
    person p2 = p1;
    p2.age = 36;
    p2.name[0] = 'R';
    cout << p1.name << " " << p2.name << endl;
    cout << p1.age << " " << p2.age << endl;
    return 0;
}