#include <iostream>
using namespace std;

int main(void)
{
    // Adding a single digit number...
    
    /* Adding a number to the sum to an inevitable end utill the 
        number provided is a single digit number and is not equal to 10... */

    int num, sum = 0;
    while (cin >> num && num < 10)
    {
        sum+=num;
        cout << "Sum = " << sum << endl;
    }
    return 0;
}