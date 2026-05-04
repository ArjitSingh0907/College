#include <iostream>
using namespace std;

int main(void){
    int attend;
    cout << "Enter your percentage: ";
    cin >> attend;
    if (attend >= 75 && attend < 85){
        cout << "Yellow" << endl;
    } else if (attend < 75){
        cout << "Red" << endl;
    } else if (attend > 85){
        cout << "Green" << endl;
    } else {
        cout << "Invalid input" << endl;
    }
    return 0;
}