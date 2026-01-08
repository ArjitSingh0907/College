#include <iostream>
using namespace std;

int main(void)
{
    int num;
    int i = 0;
    int sum = 0;
    int value = 0;

    cout << "Numbers to add : ";
    cin >> num;

    while (i < num)
    {
        cin >> value;
        sum += value;
        i++;
    }
    
    cout << "Sum : " << sum << endl;
    return 0;
}