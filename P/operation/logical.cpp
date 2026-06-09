#include <iostream>
using namespace std;

int main(void){
    int cups;
    bool student;
    cout << "Number of cups of tea purchased: ";
    cin >> cups;
    cout << "Are you a student? (1 for yes, 0 for no): ";
    cin >> student;
    if (student == 1 || cups > 15) {
        cout << "Eligible for student discount." << endl;
    } else if (student == 0 || cups > 15) {
        cout << "Not eligible for student discount." << endl;
    } else if (student == 0 && cups <= 15) {
        cout << "Not eligible for student discount." << endl;
    } else {
        cout << "enter either 0 or 1." << endl;
    }
    return 0;
}