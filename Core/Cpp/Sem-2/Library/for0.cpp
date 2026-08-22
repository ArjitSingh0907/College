#include <iostream>
using namespace std;

int main(void)
{
    int num;
    cout << "Enter a Number : ";
    cin >> num;
    cout << "Printing Numbers from 0 to the number provided!" << endl;
    
    for (int i=1 ; i<=num ; i++)
    {
        cout << "Number : " << i << endl;
    }
    return 0;
}