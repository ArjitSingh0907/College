#include <iostream>
#include <string>
using namespace std;

/**
 * @brief Employee class represents an employee with name, ID, and salary.
 * It provides methods to set default values, input details, and display details.
 */
class Employee
{
    private:
    string name;        /**< Employee's name */
    string id;          /**< Employee's ID */
    long long int salary; /**< Employee's salary */

    public:
    /**
     * @brief Sets default values for employee details.
     * Name: "Unknown", ID: "0", Salary: 0
     */
    void set_default(void)
    {
        name = "Unknown";
        id = "0";
        salary = 0;
    }
    /**
     * @brief Prompts user to input employee details.
     */
    void set_details(void)
    {
        cout << "Enter Name : ";
        cin >> name;
        cout << "Enter ID : ";
        cin >> id;
        cout << "Enter Salary : ";
        cin >> salary;
    }
    /**
     * @brief Displays employee details.
     */
    void  get_details(void)
    {
        cout << "Name : " << name << endl;
        cout << "ID : " << id << endl;
        cout << "Salary : " << salary << endl;
    }
};

/**
 * @brief Manager class inherits from Employee and adds department information.
 */
class Manager : public Employee
{
    private:
    string department;  /**< Manager's department */

    public:
    string dept;        /**< Public copy of department */
    /**
     * @brief Prompts user to input department.
     */
    void set_dept(void)
    {
        cout << "Department : ";
        cin >> department;
        dept = department;
    }
    /**
     * @brief Displays department.
     */
    void get_dept(void)
    {
        cout << "Department : " << department << endl;
    }
};

/**
 * @brief Main function demonstrates the Manager class.
 * Creates a Manager object, sets defaults, inputs details and department, then displays them.
 */
int main(void)
{
    Manager mgr;
    mgr.set_default();
    mgr.set_details();
    mgr.set_dept();
    cout << "Details : " << endl;
    mgr.get_details();
    mgr.get_dept();
    return 0;
}