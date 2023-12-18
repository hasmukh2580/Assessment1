#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

// Function to get the user's choice
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
    char userChoice, computerChoice;

    // Get user and computer choices
    userChoice = getUserChoice();
    computerChoice = getComputerChoice();

    // Determine the winner
    determineWinner(userChoice, computerChoice);

    return 0;
}

