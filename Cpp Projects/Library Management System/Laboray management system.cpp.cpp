#include <iostream>
#include <string>
using namespace std;

struct Book 
{
    int id;
    string title;
    string author;
    int year;
    bool isBorrowed; 
};

const int MAX_BOOKS = 10;

void addBook(Book books[], int &count) {
    if (count < MAX_BOOKS) {
        cout << "Enter book ID: "<<endl;
        cin >> books[count].id;

          cout << "Enter book title: "<<endl;
         cin>>books[count].title;

        cout << "Enter book author: "<<endl;
        cin>>books[count].author;
        
        cout << "Enter publication year:"<<endl;
        cin >> books[count].year;

        count++;
        cout << "Book added successfully!" << endl;
    } 
	else{
        cout << "Library is full!" << endl;
    }
}

void displayBooks(const Book books[], int count) {
    if (count == 0) {
        cout << "No books available!" << endl;
        return;
    }

    cout << "\nList of Books in the Library:\n";
    for (int i = 0; i < count; i++) {
        cout << "ID: " << books[i].id << ", Title: " << books[i].title
             << ", Author: " << books[i].author << ", Year: " << books[i].year
             << ", Status: " << (books[i].isBorrowed ? "Borrowed" : "Available") << endl;
    }
}

void searchBookByTitle(const Book books[], int count) {
    cout << "Enter book title to search: ";
    string title;
    cin >> title;

    bool found = false;
    for (int i = 0; i < count; i++) {
        if (books[i].title == title) {
            cout << "Book found: ID: " << books[i].id << ", Title: " << books[i].title
                 << ", Author: " << books[i].author << ", Year: " << books[i].year
                 << ", Status: " << (books[i].isBorrowed ? "Borrowed" : "Available") << endl;
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "Book not found!" << endl;
    }
}

void deleteBook(Book books[], int &count) {
    cout << "Enter the ID of the book to delete: ";
    int id;
    cin >> id;

    bool found = false;
    for (int i = 0; i < count; i++) {
        if (books[i].id == id) {
            found = true;
            for (int j = i; j < count - 1; j++) {
                books[j] = books[j + 1];
            }
            count--;
            cout << "Book deleted successfully!" << endl;
            break;
        }
    }

    if (!found) {
        cout << "Book not found!" << endl;
    }
}

void borrowBook(Book books[], int count) {
    cout << "Enter the ID of the book to borrow: ";
    int id;
    cin >> id;

    bool found = false;
    for (int i = 0; i < count; i++) {
        if (books[i].id == id) {
            found = true;
            if (!books[i].isBorrowed) {
                books[i].isBorrowed = true;
                cout << "You have successfully borrowed the book: " << books[i].title << endl;
            } else {
                cout << "Book is already borrowed!" << endl;
            }
            break;
        }
    }


    if (!found) {
        cout << "Book not found!" << endl;
    }
}

void returnBook(Book books[], int count) {
    cout << "Enter the ID of the book to return: ";
    int id;
    cin >> id;

    bool found = false;
    for (int i = 0; i < count; i++) {
        if (books[i].id == id) {
            found = true;
            if (books[i].isBorrowed) {
                books[i].isBorrowed = false;
                cout << "You have successfully returned the book: " << books[i].title << endl;
            } else {
                cout << "Book is not borrowed!" << endl;
            }
            break;
        }
    }

    if (!found) {
        cout << "Book not found!" << endl;
    }
}


int main()
{
     
	Book books[MAX_BOOKS];
    int count = 0;
    int choice;
    
	cout << "***********************************************"<<endl;
    cout << "||        WELCOME TO THE LIBRARY SYSTEM       ||"<<endl;
    cout << "***********************************************"<<endl;
   
    while (choice != 7)
	{
        cout << "\nLibrary Management System\n";
        cout << "1. Add Book"<<endl;
        cout << "2. Display All Books"<<endl;
        cout << "3. Search Book by Title"<<endl;
        cout << "4. Delete Book by ID"<<endl;
        cout << "5. Borrow Book"<<endl;
        cout << "6. Return Book"<<endl;
        cout << "7. Exit"<<endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                addBook(books, count);
                break;
            case 2:
                displayBooks(books, count);
                break;
            case 3:
                searchBookByTitle(books, count);
                break;
            case 4:
                deleteBook(books, count);
                break;
            case 5:
                borrowBook(books, count);
                break;
            case 6:
                returnBook(books, count);
                break;
            case 7:
                cout << "Exiting the system...\n";
                break;
            default:
                cout << "Invalid choice! Please try again.\n";
        }
    } 

    return 0;
}

