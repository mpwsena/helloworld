#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    // Seed the random number generator
    srand(time(NULL));
    
    // Generate a random number between 1 and 100
    int secretNumber = rand() % 100 + 1;
    
    int guess;
    int attempts = 0;
    bool correct = false;
    
    cout << "Welcome to the Guessing Game!\n";
    cout << "Try to guess the secret number between 1 and 100.\n";
    
    while (!correct) {
        cout << "Enter your guess: ";
        cin >> guess;
        
        attempts++;
        
        if (guess == secretNumber) {
            cout << "Congratulations! You've guessed the correct number in " << attempts << " attempts!\n";
            correct = true;
        } else if (guess < secretNumber) {
            cout << "Too low! Try again.\n";
        } else {
            cout << "Too high! Try again.\n";
        }
    }
    
    return 0;
}
