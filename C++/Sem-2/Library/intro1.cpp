#include <iostream>
#include <string.h>
using namespace std;

int main(void)
{
    string name;
    cout << "Enter Your Name : ";
    cin >> name;
    int count = 0;

    for (int i=0 ; name[i] != '\0' ; i++)
    {
        cout << "Name : " << name[i] << endl;
        count++;
    }
    cout << "Characters : " << count << "." << endl;
    cout << "Hello, " << name << "." << endl;
}