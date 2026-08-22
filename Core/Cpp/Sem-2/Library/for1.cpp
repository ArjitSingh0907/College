#include <iostream>
using namespace std;

int main(void)
{
    int times = 0;
    cout << "Enter Number of times to print : ";
    cin >> times;
    string message;
    cout << "Enter Msg to print (space should be '_'): ";
    cin >> message;

    for (int i=1 ; i<=times ; i++)
    {
        cout << message << endl;
    }
    return 0;
}