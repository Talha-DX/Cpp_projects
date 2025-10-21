#include <iostream>
#include <string>
#include <math.h>
using namespace std;

const int MAX_USERS = 100;

struct User {
    string username;
    string password;
};

// Function prototypes
void displayMenu();
void registerUser(User users[], int &userCount);
void loginUser(User users[], int userCount);

int main() {
    cout << "***********************************************"<<endl;
    cout << "||        WELCOME TO THE LOGIN PAGE          ||"<<endl;
    cout << "***********************************************"<<endl;
   
    User users[MAX_USERS];  // Array for user data
    int userCount = 0;  // Number of registered users
    int choice = 0;  // Menu choice

    while (choice != 3) {
        displayMenu();
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: // Register a new user
                registerUser(users, userCount);
                break;

            case 2: // Login
                loginUser(users, userCount);
                break;

            case 3: // Exit
                cout << "Exiting program.\n";
                break;

            default: // Invalid choice
                cout << "Invalid choice! Try again.\n";
                break;
        }
    }

    return 0;
}

// Function to display the menu
void displayMenu() {
    cout << "\nMenu:\n";
    cout << "1. Register\n";
    cout << "2. Login\n";
    cout << "3. Exit\n";
}

// Function to register a new user
void registerUser(User users[], int &userCount) {
    if (userCount >= MAX_USERS) {
        cout << "User limit reached.\n";
    } else {
        cout << "Enter username: ";
        cin >> users[userCount].username;
        cout << "Enter password: ";
        cin >> users[userCount].password;
        userCount++;
        cout << "Registration successful!\n";
    }
}

// Function to login a user
void loginUser(User users[], int userCount) {
    string username, password;
    bool found = false;

    cout << "Enter username: ";
    cin >> username;
    cout << "Enter password: ";
    cin >> password;

    // Check if the user exists
    for (int i = 0; i < userCount; i++) {
        if (users[i].username == username && users[i].password == password) {
            cout << "Login successful! Welcome, " << username << "!\n";
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "Invalid username or password!\n";
    }
}
