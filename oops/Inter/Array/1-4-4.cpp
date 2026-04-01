//Allocate a single integer in heap
//Method 2 for string
#include <iostream>
using namespace std;

int main(void){
    string *name = new string;
    *name = "Arjit Singh";
    cout << "Name of student : " << *name << endl;
    delete name;
    return 0;
}