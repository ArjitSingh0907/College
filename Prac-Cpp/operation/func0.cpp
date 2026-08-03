#include <iostream>
using namespace std;

int sum(int a, int b){
    return a+b;
}

int main(void){
    int x = 3;
    int y = 7;
    int s = sum(x, y);
    cout << s << endl;
    return 0;
}