#include <iostream>
using namespace std;

void units_made(int units){
    units = units + 32;
    cout << "Units made: " << units << endl;
}

int main(void){
    int units_total = 100;
    units_made(units_total);
    cout << "Units total: " << units_total << endl;
    return 0;
}