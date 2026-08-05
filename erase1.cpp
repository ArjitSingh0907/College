#include <iostream>
#include <vector>
using namespace std;

int main(void){
    vector <int> v = {1, 2, 3, 4, 5};
    for (const auto& it : v){
        cout << it;
    }
    v.erase(v.begin() + 1, v.begin() + 3);
    cout << endl;
    for (const auto& val : v){
        cout << val;
    }
    return 0;
}