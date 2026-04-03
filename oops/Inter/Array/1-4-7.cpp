//Allocate a 1D array in heap and count them
#include <iostream>
using namespace std;

int main(void){
    int n;
    int count = 0;
    int sum = 0;
    cout << "Enter number enteries : ";
    cin >> n;
    int *num = new int[n];
    for (int i=0 ; i<n ; i++){
        cout << "Enter Number : ";
        cin >> num[i];
        count = count + 1;
        sum = sum + num[i];
    }
    for (int i=0 ; i<n ; i++){
        cout << "numbers : " << num[i] << endl;
    }
    cout << "total enteries : " << count << endl;
    cout << "sum of enteries :" << sum << endl;
    delete [] num;
    return 0;
}