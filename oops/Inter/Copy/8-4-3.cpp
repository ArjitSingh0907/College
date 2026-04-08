//shallow copy - 3
//changing p2 will change p1.
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
    person p1(19, "Peter");
    person p2(p1);
    p2.age = 34;
    p2.name[0] = 'T';

    cout << p1.name << " " << p2.name << endl;
    cout << p1.age << " " << p2.age << endl;
    return 0;
}