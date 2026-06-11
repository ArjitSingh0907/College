#include <iostream>
using namespace std;

int main(void){
    int cup_number = 0;
    string instruction = "Make the cup of tea by adding milk + sugar + tea powder.";
    for (int i=0 ; i<5 ; i++){
        cout << "Cup " << cup_number + 1 << ": " << instruction << endl;
        cup_number += 1;
    }
}