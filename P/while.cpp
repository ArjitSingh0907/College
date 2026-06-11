#include <iostream>
using namespace std;

int main(void){
    int total_cups = 10;
    int cups = 0;
    while(cups < total_cups){
        cups += 1;
        cout << "cups used out of 10 : " << cups << endl;
    }
    return 0;
}