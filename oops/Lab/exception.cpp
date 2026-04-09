//Exception Handling in C++
#include <iostream>
using namespace std;

int main(void) 
{
    int a, b;
    cout << "Arjit Singh" << endl;
    cout << "A50105225074" << endl;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    try 
    {
        if(b == 0) 
        {
            throw runtime_error("Division by zero not allowed!");
        }
        cout << "Result: " << a / b << endl;
    }
    catch(runtime_error &e) 
    {
        cout << "Error: " << e.what() << endl;
    }
    return 0;
}
