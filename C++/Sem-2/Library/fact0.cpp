#include <iostream>
using namespace std;

int main(void)
{
    int num;
    int fact = 1;
    int i = 1;
    cout << "Enter a number : ";
    cin >> num;

    while (i <= num)
    {
        fact = fact * i;
        i++;
    }

    cout << "Factorial of " << num << " is " << fact << endl;
    return 0;

}