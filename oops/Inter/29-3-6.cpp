//Employee class and write getter/setter for updating and setting the salary.
#include <iostream>
using namespace std;

class employee{
    public:
    string name;
    int age;
    int salary;
    void set_salary(int Salary){
        salary = Salary;
    }
    int get_salary(){
        cout << "Salary : " << salary << endl;
    }
};
int main(void){
    employee emp1;
    emp1.name = "Shubham";
    emp1.age = 17;
    emp1.set_salary(7800000);
    cout << "Name : " << emp1.name << endl;
    cout << "Age : " << emp1.age << endl;
    emp1.get_salary();
    return 0;
}