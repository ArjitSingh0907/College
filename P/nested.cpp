#include <iostream>
#include <string>
using namespace std;

int main(void){
    string menu[3] = {"green tea", "black tea", "oolong tea"};
    for (int i=0 ; i<3 ; i++){
        cout << "Brewing " << menu[i] << endl;{
            for (int j=0 ; j<3 ; j++){
                cout << "Adding " << menu[j] << " to the cup." << endl;
            }
        }
    }
    return 0;
}