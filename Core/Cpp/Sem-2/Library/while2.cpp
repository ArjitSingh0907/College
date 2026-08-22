#include <iostream>
using namespace std;

int main(void)
{
    int start, end, x, y;
    cout << "Enter starting digit : ";
    cin >> start;
    cout << "Enter terminating digit : ";
    cin >> end;

    x = start;
    y = end;

    while (x <= y)
    {
        cout << x << endl;
        x++;
    }
    return 0;
}