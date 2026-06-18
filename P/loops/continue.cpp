#include <iostream>
using namespace std;

int main(void){
    string tea_types[3] = {"green tea", "black tea", "oolong tea"};
    for (int i=0 ; i<3 ; i++){
        if(tea_types[i] == "oolong tea"){
            cout << "skipping the " << tea_types[i] << endl;
            continue;
        }
        cout << "Making a cup of " << tea_types[i] << endl;
    }
}