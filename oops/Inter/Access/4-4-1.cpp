//private members : name and sgpa.
//constructor to initialize current state (Arjit, 8.72).
//public method : display details, upgrade result.
#include <iostream>
#include <string>
using namespace std;

class student{
    private:
    string name;
    float sgpa;
    float new_sgpa;

    public:
    student(string n = "Arjit", float s = 8.72){
        this -> name = n;
        this -> sgpa = s;
        this -> new_sgpa = s;
    }
    void displaydetails(){
        cout << "Name : " << name << endl;
        cout << "SGPA(old) : " << sgpa << endl;
    }
    void newresult(){
        cout << "Enter new SGPA : ";
        cin >> new_sgpa;
        cout << "SGPA(new) : " << new_sgpa << endl;
    }
    void checkresult(){
        if(new_sgpa > sgpa){
            cout << "Congrats! Your SGPA has been upgraded." << endl;
            cout << "Highest Score : " << new_sgpa << endl;
        } else {
            cout << "Highest Score : " << sgpa << endl;
        }
    }
    void average(){
        float avg = (sgpa + new_sgpa) / 2;
        cout << "Average SGPA : " << avg << endl;
    }
};

int main(void){
    student s;
    s.displaydetails();
    s.newresult();
    s.checkresult();
    s.average();
    return 0;
}