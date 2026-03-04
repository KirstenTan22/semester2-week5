// Worksheet 2.5

/* 
 * Task 3 - extension task
 * Implement a C program that demonstrates an input validation loop with the following requirements:
 * 1. Prompt the person to enter a password that must:
 *    a. Be at least 8 characters long
 *    b. Contain at least one uppercase letter
 *    c. Contain at least one number
 *    d. Contain at least one special character (!@#$%^&*)
 * 2.	Use an appropriate loop structure to continue prompting until a valid password is entered
 * 3.	After a successful password entry, ask if they want to validate another password (y/n)
 * 4.	Use an appropriate outer loop to continue the program until the person chooses to exit
 * This task requires combining nested loops with string processing and character checking.
 */

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
 
 int main(void){

	char password[100], choice;
	bool invalidPassword, invalidChoice;
	int len;

	do {
		invalidPassword = false;

		printf("Enter a password: ");
		fgets(password, sizeof(password), stdin);
		password[strcspn(password, "\n")] = 0; // Remove newline char

		len = strlen(password);

		if (len < 8) {
			printf("Password must be at least 8 characters long.\n");
			invalidPassword = true;
		} else if (!strpbrk(password, "ABCDEFGHIJKLMNOPQRSTUVWXYZ")) {
			printf("Password must contain at least one uppercase letter.\n");
			invalidPassword = true;
		} else if (!strpbrk(password, "0123456789")) {
			printf("Password must contain at least one number.\n");
			invalidPassword = true;
		} else if (!strpbrk(password, "!@#$%^&*")) {
			printf("Password must contain at least one special character (!@#$%^&*).\n");
			invalidPassword = true;
		}

		printf("Password is valid.\n");

		do {
			invalidChoice = false;

			printf("Do you want to validate another password? (y/n): ");
			fgets(&choice, sizeof(choice), stdin);
			if (choice == 'n' || choice == 'N') {
				return 0;
			} else if (choice != 'y' && choice != 'Y') {
				printf("Invalid choice. Please enter y or n.\n");
				invalidChoice = true;
			} else {
				break;
			}
		} while (invalidChoice);

	} while (invalidPassword);
	 
	 return 0;
 }