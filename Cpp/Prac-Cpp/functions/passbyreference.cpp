#include <iostream>
using namespace std;

void memory_used(int &memory){
    memory = memory - 5;
    cout << "Memory used: " << memory << "GB" << endl;
}

int main(void){
    int memory_total = 512;
    memory_used(memory_total);
    cout << "Memory total: " << memory_total << "GB" << endl;
    return 0;
}