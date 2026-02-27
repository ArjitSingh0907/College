#include <iostream>
#include <string>
using namespace std;

class Book
{
    private:
    string bookid;

    public:
    void setid(string x)
    {
        bookid = x;
    }

    string getid()
    {
        return bookid;
    }
};

int main(void)
{
    Book b1;
    string user, bookname, x;
    cout << "Enter Your Name : ";
    cin >> user;
    cout << "Book Name : ";
    cin >> bookname;

    cout << "Enter Bookid : ";
    cin >> x;

    b1.setid(x);
    cout << "--------------------------------------" << endl;
    cout << "Book Id : " << b1.getid() << endl;
    cout << "--------------------------------------" << endl;
    return 0;
}