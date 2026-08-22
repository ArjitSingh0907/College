#include <iostream>
using namespace std;

int main(void)
{
    int num1 = 0;
    int num2 = 0;
    cout << "Enter Num1 : ";
    cin >> num1;
    cout << "Enter Num2 : ";
    cin >> num2;

    if (num1 < 0 || num2 < 0)
    {
        cout << "Provide a positive input!";
        return -1;
    }
    else if (num1 < num2)
    {
        cout << "Num1 = " << num1 << " is less than Num2 = " << num2 << "." << endl;
    }
    else if (num1 > num2)
    {
        cout << "Num1 = " << num1 << " is greater than Num2 = " << num2 << "." << endl;
    }
    else
    {
        cout << "Invalid Input!";
        return 1;
    }
    return 0;
}