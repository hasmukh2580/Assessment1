#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    // Seed the random number generator with the current time
    std::srand(std::time(0));

    // Generate a random number between 1 and 100
    int randomNumber = std::rand() % 100 + 1;

    int guess;
    int attempts = 0;

    std::cout << "Guess the number between 1 and 100\n";

    do {
        std::cout << "Enter your guess: ";
        std::cin >> guess;

        attempts++;

        if (guess > randomNumber) {
            std::cout << "Too high! Try again.\n";
        } else if (guess < randomNumber) {
            std::cout << "Too low! Try again.\n";
        } else {
            std::cout << "Congratulations! You guessed the number in " << attempts << " attempts.\n";
        }
    } while (guess != randomNumber);

    return 0;
}

