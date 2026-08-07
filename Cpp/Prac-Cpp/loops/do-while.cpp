#include <iostream>
#include <string>
using namespace std;

int main(void){
    string answer;
    do{
        cout << "Do u want more tea? (yes or no) : ";
        cin >> answer;
        for (int i = 0; i < answer.length(); i++)
        {
            answer[i] = tolower(answer[i]);
        }
    } while (answer == "yes");
    cout << "Ok, no more tea for you!" << endl;
}