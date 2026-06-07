#include <iostream>
using namespace std;

int main(void)
{
    int sum = 0;
    int num;
    
    cout << "Enter Number : ";
    cin >> num;

    while (num <= 10)
    {
        sum = sum + num;
        num++;
    }

    cout << "Sum of numbers till 10 is : " << sum << endl;
    return 0;
}