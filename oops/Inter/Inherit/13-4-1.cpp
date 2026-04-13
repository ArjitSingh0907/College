//The Challenge: Create a class Person, a class Student (inheriting from Person), 
//and a class Scholar (inheriting from Student).
#include <iostream>
#include <string>
using namespace std;

class person{
    public:
    string name;
    void setname(string n){
        name = n;
    }
    void displayname(){
        cout << "Name: " << name << endl;
    }
    ~person(){
        cout << "Person object destroyed." << endl;
    }
};
class student : public person{
    public:
    int rollno;
    int grade;
    string section;
    void setdetails(int r, int g, string s){
        rollno = r;
        grade = g;
        section = s;
    }
    void displaydetails(){
        cout << "Roll No: " << rollno << endl;
        cout << "Grade: " << grade << endl;
        cout << "Section: " << section << endl;
    }
    ~student(){
        cout << "Student object destroyed." << endl;
    }
};
class scholar : public student{
    public:
    int marks;
    string scholarship;
    void setscholar(int m, string s){
        marks = m;
        scholarship = s;
    }
    void displayscholar(){
        cout << "Marks: " << marks << endl;
        cout << "Scholarship: " << scholarship << endl;
    }
    ~scholar(){
        cout << "Scholar object destroyed." << endl;
    }
};
int main(void){
    scholar s1;
    s1.setname("Peter Parker");
    s1.setdetails(5074, 1, "B");
    s1.setscholar(95, "Full Scholarship");
    s1.displayname();
    s1.displaydetails();
    s1.displayscholar();
    return 0;
}