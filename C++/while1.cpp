#include <iostream>
using namespace std;

int main(void)
{
    int num;
    cout << "Enter Number less than and != 10 : ";
    cin >> num;
    if (num > 10)
    {
        cout << "Error!" << endl;
        cout << "Enter Num < 10..." << endl;
        return 0;
    }
    else if (num == 10)
    {
        cout << "Enter Num < 10..." << endl;
        cout << "Error!" << endl;
        return 0;
    }
    else
    {
        while (num <= 10)
        {
            cout << num << endl;
            num++;
        }
        return 0;
    }
}