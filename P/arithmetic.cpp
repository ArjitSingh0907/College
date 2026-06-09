#include <iostream>
using namespace std;

int main(void){
    int num_cups;
    double price;
    cout << "Price per cup = $3.25" << endl;
    cout << "Enter number of cups : ";
    cin >> num_cups;
    price = num_cups * 3.25;
    cout << "Total Price : $" << price << endl;
    return 0;
}