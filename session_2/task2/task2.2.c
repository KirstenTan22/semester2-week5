// Week 5, Session 2

/* Task 2.2
 * Write a C program that continuosly prompts the user to enter
 * a message and then prints it back to them. The loop should terminate
 * if the user types "quit".
 * - use fgets() + newline removal
 * - use strcmp for string comparison
 */
 
 #include <stdio.h>
 #include <string.h>
 #include <stdbool.h>
 
 int main(void) {
	 
	char input[100] = "";

	while (true) {
		printf("Enter a message: ");
		fgets(input, sizeof(input), stdin);
		input[strcspn(input, "\n")] = 0;
		if (strcmp(input, "quit") == 0)
			break;
		printf("Your message was: %s\n", input);
	}
	 
	 return 0;
 }