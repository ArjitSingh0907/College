#include <iostream>
using namespace std;

int main(void)
{
    char opr;
    int num1, num2;
    int value = 0;

    cout << "Enter num1 = ";
    cin >> num1;
    cout << "Enter num2 = ";
    cin >> num2;
    cout << "Operator (+,-,*,/) : ";
    cin >> opr;
    
    if (opr == '+')
    {
        value = num1 + num2;
        cout << "Addition : " << value << endl;
    }
    else if (opr == '*')
    {
        value = num1 * num2;
        cout << "Product : " << value << endl;
    }
    else if (opr == '/')
    {
        value = num1 / num2;
        cout << "Division : " << value << endl;
    }
    else if (opr == '-')
    {
        value = num1 - num2;
        cout << "Subtracion : " << value << endl;
    }
    else
    {
        cout << "Error. Invalid Input!" << endl;
        return -1;
    }
    return 0;
}