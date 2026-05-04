#include <iostream>
using namespace std;

int main(void){
    int age;
    string name;

    cout << "Enter your age: ";
    cin >> age;
    cin.ignore(100, '\n');
    cout << "Enter your name: ";
    getline(cin, name);
    cout << "Your name is: " << name << endl;
    cout << "Your age is: " << age << endl;
     return 0;
}