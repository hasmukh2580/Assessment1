#include <iostream>

using namespace std;

int main() {
    int choice;

    do {
        // Display the menu
        cout << "Menu:\n";
        cout << "1. Option 1\n";
        cout << "2. Option 2\n";
        cout << "3. Option 3\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";

        // Get user input
        cin >> choice;

        // Process user choice using switch statement
        switch (choice) {
            case 1:
                cout << "You selected Option 1.\n";
                // Add logic for Option 1
                break;
            case 2:
                cout << "You selected Option 2.\n";
                // Add logic for Option 2
                break;
            case 3:
                cout << "You selected Option 3.\n";
                // Add logic for Option 3
                break;
            case 4:
                cout << "Exiting the program. Goodbye!\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }

    } while (choice != 4);  // Repeat the loop until the user chooses to exit (Option 4)

    return 0;
}

