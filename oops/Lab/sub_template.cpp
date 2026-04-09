//subtraction using template class.
#include <iostream>
using namespace std;

template <class T>
class Subtract 
{
    T a, b;
    public:
    Subtract(T x, T y) : a(x), b(y) {}
    T result() 
    { 
        return a - b; 
    }
};

int main(void) 
{
    Subtract<int> s1(20, 5);
    cout << "Int subtraction: " << s1.result() << endl;

    Subtract<float> s2(10.5, 4.2);
    cout << "Float subtraction: " << s2.result() << endl;

    cout << "Arjit Singh" << endl;
    cout << "A50105225074" << endl;

    return 0;
}
