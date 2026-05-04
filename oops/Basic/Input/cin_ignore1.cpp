#include <iostream>
using namespace std;

int main(void){
    int age;

    cout << "Enter your age: ";
    cin >> age;
    if (cin.fail()){
        cout << "Invalid Input!" << endl;
        cin.clear();
        cin.ignore(100, '\n');
        cout << "Enter your age again: ";
        cin >> age;
        if (cin.fail()) {
            cout << "Invalid Input again!" << endl;
        }
    } else {
        cout << "Your age is: " << age << endl;
    }
    return 0;
}