//Add Two Numbers using Template Function
#include <iostream>
using namespace std;

template <class T>
T add(T a, T b) 
{
    return a + b;
}

int main(void) 
{
    cout << "Int sum: " << add<int>(30, 50) << endl;
    cout << "Float sum: " << add<float>(9.5, 8.9) << endl;
    cout << "Arjit Singh" << endl;
    cout << "A50105225074" << endl;
    return 0;
}
