#include <iostream>
using namespace std;

int main(void){
    int tea_cups;
    cout << "Enter the number of tea cups you want : ";
    cin >> tea_cups;
    if (tea_cups > 20){
        cout << "You got a Golden Badge!" << endl;
    } else if (tea_cups < 20 && tea_cups > 10){
        cout << "You got a Silver Badge!" << endl;
    } else if (tea_cups < 10 && tea_cups > 0){
        cout << "You got a Bronze Badge!" << endl;
    } else {
        cout << "Invalid input!" << endl;
    }
    return 0;
}