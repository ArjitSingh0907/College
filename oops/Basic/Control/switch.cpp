#include <iostream>
#include <string>
using namespace std;


int main(void){
    char grade;
    cout << "Enter your grade (A, B, C, D, F): ";
    cin >> grade;
    if (grade == 'a' || grade == 'b' || grade == 'c' || grade == 'd' || grade == 'f') {
        cout << "Invalid input." << endl;
    }
    switch (grade) {
        case 'A':
            cout << "Marks around 95-100" << endl;
            break;
        case 'B':
            cout << "Marks around 80-94" << endl;
            break;
        case 'C':
            cout << "Marks around 65-79" << endl;
            break;          
        case 'D':
            cout << "Marks around 55-64" << endl;
            break;
        case 'F':
            cout << "Marks below 54" << endl;
            break;
        default:
            cout << "Invalid input" << endl;
        }
    return 0;
}