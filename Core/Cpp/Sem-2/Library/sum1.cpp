#include <iostream>
using namespace std;

int main(void)
{
    int num = 0, sum = 0;
    cout << "Enter a number : ";
    cin >> num;

    for (int i=1 ; i<=num ; i++)
    {
        sum = sum + i;
    }
    cout << "Sum till " << num << " is " << sum << endl;
    return 0;
}