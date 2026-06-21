#include <iostream>
using namespace std;

int farenheit(int temp){
    return (temp * 9/5) + 32;
}

int main(void){
    int temp;
    cout << "enter temp in celcius: ";
    cin >> temp;
    cout << "temp in fahrenheit: " << farenheit(temp) << endl;
    return 0;
}