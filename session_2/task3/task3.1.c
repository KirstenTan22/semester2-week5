// Week 5, Session 2

/* Task 3.1
 * Number Guessing Game
 * A program where the computer selects a random number and the person tries to guess it
 */

#include <stdio.h>
#include <stdlib.h>  // For rand(), srand(), atoi()
#include <time.h>    // For time()
#include <string.h>  // For strcspn()
#include <stdbool.h>

int main(void) {
    char input[20];      // Buffer for input
    int guess;           // The person's guess
    int target;          // The random number to guess
    int num_guesses;     // Counter for number of guesses
    int min = 1;         // Minimum value for random number
    int max = 100;       // Maximum value for random number
    int playing = 1;     // Flag to control the main game loop
    bool won = false;
    int factor;
    char choice;
    
    // Seed the random number generator
    srand(time(NULL));
    
    printf("=== Number Guessing Game ===\n");
    printf("I'm thinking of a number between %d and %d\n", min, max);
    
    // TODO: Generate a random number between min and max
    // Hint: target = min + rand() % (max - min + 1);
    target = min + rand() % (max - min + 1);
    
    // TODO: Implement the main game loop
    // This should continue until the person decides to quit
    
        // Reset number of guesses for a new game
        num_guesses = 0;
        
        // TODO: Implement the guessing loop
        // This should continue until the correct number is guessed
        
        while (playing) {
            printf("Enter your guess: ");
            
            // TODO: Read and process the input
            // Use fgets() to read input
            // Use atoi() to convert to integer
            fgets(input, sizeof(input), stdin);
            guess = atoi(input);
            
            num_guesses++;
            
            // TODO: Check if the guess is correct, too high, or too low
            // Provide appropriate in-game feedback
            if (guess == target) {
                printf("Correct!");
                won = true;
            } else if (guess < target) {
                printf("Too low!");
            } else {
                printf("Too high!");
            }
            
            // TODO: Offer a hint after several failed attempts
            if (!won && num_guesses > 5) {
                for (int i = 0; i<target/2; i++) {
                    if (target % i == 0) {
                        factor = i;
                        break;
                    }
                }

                printf("Hint: This number is divisible by %d\n", factor);
            }
            
        
        // TODO: Ask if the person wants to play again
        // Update the 'playing' flag based on the answer
            if (won) {
                printf("Would you like to play again? (Y/N): ");
                fgets(input, sizeof(input), stdin);
                input[strcspn(input, "\n")] = 0;
                choice = toupper(input[0]);

                if (choice == 'N') {
                    playing = 0;
                }
            }
        }
    
    printf("\nThanks for playing!\n");
    return 0;
}
