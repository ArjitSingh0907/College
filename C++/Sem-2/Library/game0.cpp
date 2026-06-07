#include <iostream>
using namespace std;

int main(void)
{
    int correct = 7;
    int chance = 1;
    int guess;

    while (chance <= 3)
    {
        cout << "Guess the number : ";
        cin >> guess;

        if (guess == correct)
        {
            cout << "You Win!" << endl;
            cout << "Correct Guess is " << correct << " !" << endl;
        }
        chance++;
    }
    return 0;
}