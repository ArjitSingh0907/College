#include <iostream>
using namespace std;

int main(void){
    int time;
    cout << "Enter the hour of the day (0-23): ";
    cin >> time;
    if (time > 8 && time < 16){
        cout << "It's Open." << endl;
    } else {
        cout << "It's Closed." << endl;
    }
    return 0;
}