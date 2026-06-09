#include <iostream>
#include <string>
using namespace std;

int main(void){
    string choice;
    cout << "Do u want to order green tea?";
    cin >> choice;
    for (int i=0 ; i<choice.length() ; i++){
        choice[i] = tolower(choice[i]);
    }
    if (choice == "yes"){
        cout << "You have ordered green tea." << endl;
    } else if (choice == "no"){
        cout << "You have not ordered green tea." << endl;
    } else {
        cout << "Invalid input! Please enter 'yes' or 'no'." << endl;
    }
    return 0;
}