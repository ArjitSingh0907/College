#include <iostream>
using namespace std;

int main(void){
    int x, y;
    cout << "Enter x: ";
    cin >> x;
    cout << "Enter y: ";
    cin >> y;

    (x > y) ? cout << "X is greater than Y" : cout << "Y is greater than X";
    return 0;
}