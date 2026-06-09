#include <iostream>
using namespace std;

int main(void){
    int cups;
    int price_per_cup = 3.25;
    cout << "Enter number of cups u want : ";
    cin >> cups;
    if (cups > 20){
        cout << "You get a discount!" << endl;
        double discount = (price_per_cup * cups) - (0.2 * (price_per_cup * cups));
        cout << "Price to be paid : " << discount << endl;
    } else {
        cout << "Price to be paid : " << cups * price_per_cup << endl;
    }
    return 0;
}