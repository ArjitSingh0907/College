//Allocate a single integer in heap
//Method 2 for int
#include <iostream>
using namespace std;

int main(void){
int *num = new int(100);
cout << "Value of Pointer : " << *num << endl;
delete num;
return 0;
}