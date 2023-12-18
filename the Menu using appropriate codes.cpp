#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

// Function to display the menu
void displayMenu() {
    cout << "Rock Paper Scissors Game" << endl;
    cout << "1. Play Game" << endl;
    cout << "2. Quit" << endl;
}

// Function to get the user's choice from the menu
int getMenuChoice() {
    int choice;
    cout << "Enter your choice (1 or 2): ";
    cin >> choice;
    return choice;
}

// Function to get the user's choice for the game
char getUserChoice() {
    char choice;
    cout << "Enter your choice (R for Rock, P for Paper, S for Scissors): ";
    cin >> choice;
    return toupper(choice);  // Convert the input to uppercase
}

// Function to generate the computer's choice
char getComputerChoice() {
    srand(time(0));  // Seed for random number generation
    int randomNumber = rand() % 3;  // Generate a random number between 0 and 2

    // Map the random number to R, P, or S
    char computerChoice;
    switch (randomNumber) {
        case 0:
            computerChoice = 'R';
            break;
        case 1:
            computerChoice = 'P';
            break;
        case 2:
            computerChoice = 'S';
            break;
    }

    return computerChoice;
}

// Function to determine the winner of the game
void determineWinner(char userChoice, char computerChoice) {
    cout << "Computer's choice: " << computerChoice << endl;

    if (userChoice == computerChoice) {
        cout << "It's a tie!" << endl;
    } else if ((userChoice == 'R' && computerChoice == 'S') ||
               (userChoice == 'P' && computerChoice == 'R') ||
               (userChoice == 'S' && computerChoice == 'P')) {
        cout << "You win!" << endl;
    } else {
        cout << "Computer wins!" << endl;
    }
}

int main() {
    int menuChoice;
    char userChoice, computerChoice;

    do {
        displayMenu();
        menuChoice = getMenuChoice();

        switch (menuChoice) {
            case 1:
                // Play the game
                userChoice = getUserChoice();
                computerChoice = getComputerChoice();
                determineWinner(userChoice, computerChoice);
                break;
            case 2:
                // Quit the program
                cout << "Quitting the game. Goodbye!" << endl;
                break;
            default:
                cout << "Invalid choice. Please enter 1 or 2." << endl;
        }
    } while (menuChoice != 2);

    return 0;
}

