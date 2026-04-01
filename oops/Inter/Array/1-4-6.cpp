//Allocate a 1D array in heap
//2nd one...
#include <iostream>
using namespace std;

int main(void){
    string*name = new string[5];
    for (int i=0 ; i<5 ; i++){
        cout << "Enter name of student : ";
        cin >> name[i];
    }
    cout << "Names : {";
    for (int i=0 ; i<4 ; i++){
        cout << name[i] << ",";
    }
    cout << name[4];
    cout << "}" << endl;
    delete [] name;
    return 0;
}