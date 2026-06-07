#include <iostream>
using namespace std;

int main(void)
{
    int curvalue = 0;
    int value = 0;

    if (cin >> curvalue)
    {
        int count = 1;
        while (cin >> value)
        {
            if (value == curvalue)
            count++;
            else
            {
                cout << curvalue << " occurs " << count << " times." << endl;
                curvalue = value;
                count = 1;
            }
        }
        cout << curvalue << " occurs " << count << " times." << endl;
    }
    return 0;
}