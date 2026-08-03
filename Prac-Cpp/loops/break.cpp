//using break for code where user should reply 'stop' to end the loop
#include <iostream>
#include <string>
using namespace std;

int main(void){
    string user_input;
    do{
        cout << "Type 'stop' to stop serving tea: ";
        cin >> user_input;
        if (user_input == "stop"){
            break;
        }
    } while (true);
}