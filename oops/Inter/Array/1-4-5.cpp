//Allocate a 1D array in heap
#include <iostream>
using namespace std;

int main(void){
    int *arr = new int[7];
    for (int i=0 ; i < 7 ; i++){
        arr[i] = i+1;
    }
    cout << "Elements of array : ";
    for (int i=0 ; i < 7 ; i++){
        cout << arr[i] << " ";
    }
    delete [] arr;
    return 0;
}