//Create a class Employee with public attributes name and salary.
//Show how they can be accessed directly.
#include <iostream>
#include <string>
using namespace std;

class employee{
    private:
    string ID;

    public:
    string name;
    long long int salary;

    employee(string name = "XYZ", long long int salary = 8500000){
        this -> name = name;
        this -> salary = salary;
    }

    void setid(string id){
        this -> ID = id;
    }
    void previous(){
        cout << "Previous Salary : " << salary << endl;
    }
    void increment(int amount, string pin){
        if(pin == ID){
            if(amount > 0){
                salary += amount;
                cout << "Salary incremented by " << amount << endl;
            }
        } else {
            cout << "Invalid Employee ID" << endl;
        }
    }
    void details(){
        cout << "ID : " << ID << endl;
        cout << "Name : " << name << endl;
        cout << "Salary : " << salary << endl;
    }
};
int main(void){
    employee e;
    e.setid("1021");
    e.previous();
    e.increment(500000, "1021");
    e.details();
    return 0;
}