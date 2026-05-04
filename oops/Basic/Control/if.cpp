#include <iostream>
using namespace std;

int main(void){
    int age;
    cout << "Enter your age: ";
    cin >> age;

    if (age < 18){
        cout << "You are a minor." << endl;
    } else if (age >= 18 && age < 65){
        cout << "You are an adult." << endl;
    } else {
        cout << "You are a senior." << endl;
    }
    return 0;
}