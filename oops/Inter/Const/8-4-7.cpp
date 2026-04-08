//basic parameterized
#include <iostream>
#include <cstring>
using namespace std;

class student{
    public:
    int age;
    char *name;

    student(int age, const char *name){
        this -> age = age;
        this -> name = new char [strlen(name)+1];
        strcpy(this -> name, name);
    }
};
int main(void){
    student p1(19, "Tony Stark");
    cout << p1.name << " - " << p1.age << endl;
    return 0;
}