#include <iostream>
#include <string>
using namespace std;

class student
{
    private:
    int points;

    public:
    string name;
    string house;
    int age;

    void change_house(string x)
    {
        house = x;
    }

    string change_house()
    {
        cout << "Enter House : " << endl;
        cin >> house;
        return house;
    }
};

class leader
{
    public:
    string prof_name;
    string house;
};

int main(void)
{
    string choice;
    student s1;
    student s4;
    student s5;

    s1.name = "Harry";
    s1.house = "Gryffindor";
    s1.age = 12;

    s4.name = "Draco";
    s4.house = "Slytherin";
    s4.age = 13;

    s5.name = "Nivelle";
    s5.house = "Ravenclaw";
    s5.age = 13;

    leader l1;
    leader l2;

    l1.prof_name = "Snape";
    l1.house = "Slytherin";

    l2.prof_name = "McGonagell";
    l2.house = "Gryffindor";

    cout << s1.name << " - " << s1.house << endl;
    cout << s4.name << " - " << s4.house << endl;
    cout << s5.name << " - " << s5.house << endl;

    cout << "Anyone wants to change house, enter your name..." << endl;
    cin >> choice;

    if (choice == s1.name)
    {
        s1.house = s1.change_house();
        cout << "Updated Info : " << endl;
        cout << s1.name << " - " << s1.house << endl;
    }
    else if (choice == s4.name)
    {
        s4.house = s4.change_house();
        cout << "Updated Info : " << endl;
        cout << s4.name << " - " << s4.house << endl;
    }
    else if (choice == s5.name)
    {
        s5.house = s5.change_house();
        cout << "Updated Info : " << endl;
        cout << s5.name << " - " << s5.house << endl;
    }
    return 0;
}