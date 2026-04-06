//Dynamically allocate a Car object using new, 
//initialize it with a constructor, 
//and delete it to invoke the destructor.

#include <iostream>
#include <string.h>
using namespace std;

class car{
    private:
    string modelno;
    int cno;

    public:
    car(string modelno, int cno){
        this -> modelno = modelno;
        this -> cno = cno;
    }
    void getdetails(){
        cout << "Model No: " << modelno << endl;
        cout << "Car No : " << cno << endl;
    }
    ~car(){
        cout << "Car class and object destroyed!" << endl;
    }
};
int main(void){
    car *c = new car("BMW-X7", 450);
    c -> getdetails();
    delete c;
    return 0;
}