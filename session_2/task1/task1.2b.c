//Week 5, Session 2

# include <stdio.h>
# include <string.h>

int main(void){
/* Task 1.2b
 * Convert the following Python while loop to (1) while loop (2) do...while loop in C.
 * 
 * Python code:
 * while True:
 *     choice = input("Enter 'q' to quit: ")
 *     if choice == 'q':
 *         break
 */
	char choice[10] = "";
	// complete the rest of the code here
	while (strcmp(choice, "q")) {
		printf("Enter 'q' to quit: ");
		fgets(choice, sizeof(choice), stdin);
		choice[strcspn(choice, "\n")] = '\0';
	}
	
    return 0;
}