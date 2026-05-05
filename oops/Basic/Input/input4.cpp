#include <iostream>
using namespace std;

class number{
    public:
    int x;
    void readandprint(int num){
        cout << "Enter a number: ";
        cin >> num;
        x = (num/2);
        cout << "Half of the number is: " << x << endl;
    }
};
int main(void){
    number n;
    int num;
    n.readandprint(num);
    return 0;
}