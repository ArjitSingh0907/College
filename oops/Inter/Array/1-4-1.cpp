//Allocate a single integer in heap
//Method 1 for int
#include <iostream>
using namespace std;

int main(void){
    int *ptr = new int;
    *ptr = 100;
    cout << "Value of pointer : " << *ptr << endl;
    delete ptr;
    return 0;
}