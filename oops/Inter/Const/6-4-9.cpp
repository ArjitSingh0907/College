//Dynamically allocate an array of Book objects using new[] and delete them.
#include <iostream>
using namespace std;

class book{
    private:
    string bookid;

    public:
    string title;
    string author;
    book(string title = "Harry Potter", 
            string author = "J.K. Rowling",
                string bookid = "HP-001"){
        this -> title = title;
        this -> author = author;
        this -> bookid = bookid;
    }
    void getdetails(){
        cout << "Book ID : " << bookid << endl;
        cout << "Title : " << title << endl;
        cout << "Author : " << author << endl;
    }
    ~book(){
        cout << "Destructor called for book: " << title << endl;
    }
};
int main(void){
    book b;
    b.getdetails();
    book *books = new book[3]{
        book("The Great Gatsby", "F. Scott Fitzgerald", "TGG-001"),
        book("To Kill a Mockingbird", "Harper Lee", "TKAM-001"),
        book("1984", "George Orwell", "1984-001")
    };
    delete[] books;
    return 0;
}
