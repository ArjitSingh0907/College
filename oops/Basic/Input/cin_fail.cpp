#include <iostream>
using namespace std;

int main(void){
    int age;
    cout << "Enter your age: " << endl;
    cin >> age;
    if (cin.fail()){
        cout << "Enter in numbers!" << endl;
    } else {
        cout << "Your age is: " << age << endl;
    }
    return 0;
}