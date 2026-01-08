#include <iostream>
using namespace std;

int main(void)
{
    int num1, num2;
    int sol;
    
    cout << "Enter Num1 : ";
    cin >> num1;
    cout << "Enter Num2 : ";
    cin >> num2;

    char opr;
    cout << "Enter Operator out of (+,-,/,*) : ";
    cin >> opr;

    if (opr == '*')
    {
        sol = num1 * num2;
        cout << "Multiplication : " << sol << endl;
    }

    else if (opr == '+')
    {
        sol = num1 + num2;
        cout << "Addition : " << sol << endl;
    }

    else if (opr == '-')
    {
        sol = num1 - num2;
        cout << "Subtraction : " << sol << endl;
    }

    else if (opr = '/')
    {
        sol = (num1 / num2);
        cout << "Division : " << sol << endl;
    }
    
    else
    {
        cout << "Invalid Input!" << endl;
        return 0;
    }
    
    return 0;
}