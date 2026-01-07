#include <iostream>
using namespace std;

int main(void)
{
    int num = 0;

    while (num <= 50)
    {
        if (num % 2 != 0)
        {
            cout << num << endl;
        }
        num++;
    }
    return 0;
}