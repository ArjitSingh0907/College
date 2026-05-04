#include <iostream>
using namespace std;

int main(void){
    int age;
    cout << "Enter your age: ";
    cin >> age;

    if (age < 18){
        cout << "You are a minor." << endl;
    } else {
        cout << "You are an adult." << endl;
    }
    return 0;
}