//Allocate a single integer in heap
//Method 1 for string
#include <iostream>
using namespace std;

int main(void){
    string *name = new string("Arjit");
    cout << "Name of Student : " << *name << endl;
    delete name;
    return 0;
}