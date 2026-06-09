#include <iostream>
using namespace std;

int main(void){
    int tea_bags;
    cout << "How many tea bags do you have? ";
    cin >> tea_bags;
    if (tea_bags < 10){
        tea_bags += 5;
        cout << "Now you have " << tea_bags << " tea bags." << endl;
    }
    else { 
        cout << "You have enough tea bags." << endl;
    }
    return 0;
}