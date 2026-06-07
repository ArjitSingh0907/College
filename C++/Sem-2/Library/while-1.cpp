#include <iostream>
using namespace std;

int main(void)
{
    int end;
    cout << "Enter Ending Digit : ";
    cin >> end;

    while (end >= 0)
    {
        cout << end << endl;
        end--;
    }
    return 0;
}