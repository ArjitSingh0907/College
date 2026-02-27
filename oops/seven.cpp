#include <iostream>
#include <string>
using namespace std;

class Car 
{
private:
    string engine_number;  

protected:
    string brand;  

public:
    string model_name;
    string model_year;
    string model_colors;
    string model_price;
    int model_units;

    void setBrand(string b) 
    {
        brand = b;
    }
};

class Sports_Car : public Car 
{
public:
    string user;

    void setDetails(string a, string b, string c, string d, int e) 
    {
        model_name = a;
        model_year = b;
        model_colors = c;
        model_price = d;
        model_units = e;
    }

    void display_details(void) 
    {
        if (user == model_name) 
        {
            cout << "--------------------------------------------" << endl;
            cout << "Brand : " << brand << endl;
            cout << "Name : " << model_name << endl;
            cout << "Year : " << model_year << endl;
            cout << "Colors Available : " << model_colors << endl;
            cout << "Price : " << model_price << endl;
            cout << "Units Available : " << model_units << endl;
            cout << "--------------------------------------------" << endl;
        } 
        else 
        {
            cout << "No Vehicles Available!" << endl;
        }
    }
};

int main(void) 
{
    Sports_Car scar1, scar2;

    scar1.setDetails("Porsche", "2026", "6", "INR 16,500,000", 34);
    scar1.setBrand("Porsche");

    scar2.setDetails("BMW", "2026", "3", "INR 13,500,000", 54);
    scar2.setBrand("BMW");

    cout << "Enter Model Name: ";
    cin >> scar1.user;
    scar1.display_details();

    cout << "Enter Model Name: ";
    cin >> scar2.user;
    scar2.display_details();
    return 0;
}