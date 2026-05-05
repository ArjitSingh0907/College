#include <iostream>
using namespace std;

class solution{
    public:
    int x;
    int readandprintinteger(int num){
        cout << "enter the number: " << endl;
        cin >> num;
        x = num;
        cout << "the number is: " << x << endl;
        return x;
    }
};
int main(void){
    solution s;
    int num;
    s.readandprintinteger(num);
    return 0;
}