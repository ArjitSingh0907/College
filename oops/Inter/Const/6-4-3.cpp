//Vectors, Dynamically Allocating memory, and Copy Constructor
#include <iostream>
#include <string.h>

using namespace std;

class bank{
    private:
    int balance, pin;
    char * name;

    public:
    bank(int amount, char * name){
        balance = amount;
        this -> name = new char[strlen(name) + 1];
        strcpy(this -> name, name);
    }
    void getbalance(){
        cout << "Balance : " << balance << endl;
    }
    void getname(){
        cout << "Name : " << name << endl;
    }
};
int main(void){
    bank b(100000000, "Arjit_1");
    b.getname();
    b.getbalance();

    bank c(200000000, "Arjit_2");
    c.getname();
    c.getbalance();
    return 0;
}