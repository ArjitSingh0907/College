#include <iostream>
using namespace std;

int main(void)
{
    int num = 0;
    cout << "Enter a number : ";
    cin >> num;

    if (num < 10)
    {
        cout << "Number " << num << " is less than 10." << endl;
    }
    else
    {
        cout << "Number " << num << " is greater than 10." << endl;
    }
    return 0;
}