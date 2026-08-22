//pass by value - a copy of a thing which upon making changes do not affect the original file.

#include <iostream>
#include <string>
using namespace std;

void memory_left(int memory){
    memory = memory - 26;
    cout << "Memory left: " << memory << "GB" << endl;
}

int main(void){
    int memory_total = 512;
    memory_left(memory_total);
    cout << "Memory total: " << memory_total << "GB" << endl;
    return 0;
}