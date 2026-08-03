#include <iostream>
using namespace std;

void serve(int choice){
    switch(choice){
        case 1:
            cout << "You have chosen to serve a customer." << endl;
            break;
        case 2:
            cout << "You have chosen to check inventory." << endl;
            break;
        case 3:
            cout << "You have chosen to close the store." << endl;
            break;
        default:
            cout << "Invalid choice. Please try again." << endl;
    }
}

int main(void){
    int choice;
    cout << "Enter Choice: ";
    cin >> choice;
    serve(choice);
    return 0;
}