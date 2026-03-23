#include <iostream> 
using namespace std; 
 
class Student { 
private: 
    int rollNo; 
    string name; 
 
public: 
    void setData(int r, string n) { 
        rollNo = r; 
        name = n; 
    } 
 
    void display() { 
        cout << "Roll Number: " << rollNo << endl; 
        cout << "Name: " << name << endl; 
    } 
}; 
// Arjit Singh | A50105225074
int main() { 
 
    Student s1, s2; 
 
    s1.setData(5074, "Arjit Singh"); 
    s2.setData(5075, "Akshit Gupta"); 
 
    cout << "Student 1 Details:" << endl; 
    s1.display(); 
 
    cout << "\nStudent 2 Details:" << endl; 
    s2.display(); 
 
    return 0; 
} 
