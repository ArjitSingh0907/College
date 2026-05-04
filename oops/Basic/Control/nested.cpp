#include <iostream>
using namespace std;

int main(void)
{
    int age;
    cout << "Enter your age: ";
    cin >> age;
    if (age >= 18)
    {
        if (age == 18)
        {
            cout << "Just got adult." << endl;
        }
        else if (age > 18 && age < 65)
        {
            cout << "You are Mature adult." << endl;
        }
        else if (age == 65 || age > 65)
        {
            cout << "You are a senior." << endl;
        }
    }
    else if (age < 18)
    {
        cout << "You are a minor." << endl;
    }
    else
    {
        cout << "Invalid input." << endl;
    }
}