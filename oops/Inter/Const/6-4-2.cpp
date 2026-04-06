//Constructor - 2
#include <iostream>
using namespace std;

class student{
    private:
    int fees;
    string admno;

    public:
    string name;
    student(string n, int x, string y){
        fees = x;
        admno = y;
        name = n;
    }
    void display(){
        cout << "Name: " << name << endl;
        cout << "Fees: " << fees << endl;
        cout << "Admission Number: " << admno << endl;
    }
};
int main(void){
    student s("Arjit", 20000, "20100312");
    s.display();
    return 0;
}