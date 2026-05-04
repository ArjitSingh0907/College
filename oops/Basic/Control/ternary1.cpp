#include <iostream>
using namespace std;

int main(void){
    int a, b, c;
    cout << "Enter a : ";
    cin >> a;
    cout << "Enter b : ";
    cin >> b;
    cout << "Enter c : ";
    cin >> c;
    ((a>b) && (a>c)) ? cout << "A is greatest" : ((b>a) && (b>c)) ? cout << "B is greatest" : cout << "C is greatest";
    return 0;
}