#include <iostream>
#include <string>
using namespace std;

class Movie
{
    private:
    float rating;

    public:
    void set_rating(float x)
    {
        rating = x;
    }

    float get_rating()
    {
        return rating;
    }
};

int main(void)
{
    Movie m1;

    string name, date;
    float x;
    cout << "Enter Movie Name : ";
    cin >> name;
    cout << "Enter Movie Date : ";
    cin >> date;
    cout << "Set Rating : ";
    cin >> x;

    m1.set_rating(x);
    cout << "------------------------------------" << endl;
    cout << "Name - " << name << endl;
    cout << "Date - " << date << endl;
    cout << "Rating - " << m1.get_rating() << endl;
    cout << "------------------------------------" << endl;

    return 0;
}