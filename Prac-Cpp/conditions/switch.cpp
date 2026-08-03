#include <iostream>
using namespace std;

int main(void){
    int choice;
    cout << "choose from below options: " << endl;
    cout << "1. green tea $3.25" << endl;
    cout << "2. black tea $4.75" << endl;
    cout << "3. oolong tea $5.66" << endl;
    cout << "enter your choice: ";
    cin >> choice;
    switch(choice){
        case 1:
            cout << "you have chosen green tea, the price is $3.25" << endl;
            break;
        case 2:
            cout << "you have chosen black tea, the price is $4.75" << endl;
            break;
        case 3:
            cout << "you have chosen oolong tea, the price is $5.66" << endl;
            break;
        default:
            cout << "invalid choice" << endl;
    }
    return 0;
}