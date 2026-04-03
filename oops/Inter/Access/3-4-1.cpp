//Design a class LibraryBook
//private members : bookID, title, author, availability (boolean).
//public methods : setDetails(int id, string t, string a) to set details.
//borrowBook() to mark a book as borrowed if available.
//returnBook() to mark it as returned.
//displayDetails() to print all book information.

#include <iostream>
using namespace std;

class LibraryBook{
    private:
    long long int bookID;
    string title;
    string author;
    bool availability;

    public:
    void setdetails(int id, string t, string a){
        bookID = id;
        title = t;
        author = a;
        availability = true;
    }
    void borrowBook(){
        if(availability){
            availability = false;
            cout << "Book borrowed!" << endl;
        } else {
            cout << "Book is not available!" << endl;
        }
    }
    void returnBook(){
        availability = true;
        cout << "Book returned!" << endl;
    }
    void displayDetails(){
        cout << "Book ID : " << bookID << endl;
        cout << "Title : " << title << endl;
        cout << "Author : " << author << endl;
        cout << "Availability : " << availability << endl;
    }
};

int main(void){
    LibraryBook book;
    book.setdetails(10021, "Harry Potter", "J.K. Rowling");
    book.borrowBook();
    book.displayDetails();
    book.returnBook();
    book.displayDetails();
    return 0;
}