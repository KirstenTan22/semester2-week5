// Worksheet 2.5

/* 
 * Task 1.2 - Practice
 * Write a program that allows a user to enter a series of positive numbers using a while loop. 
 * The loop should only stop when the user enters a -1.
 * The program then calculates and prints the average of these numbers. 
 */

#include <stdio.h>

int main(void) {

	int check, num = 0, sum = 0;
	char buffer[50];
 
	printf("--- Average Calculator ---\n");
	
	while (num != -1) {
		printf("Enter a positive integer: ");
		fgets(buffer, sizeof(buffer), stdin);
		check = sscanf(buffer, "%d", &num);

		if (!check) {
			printf("Error: Please enter a positive integer.\n");
		} else if (num != -1) {
			sum += num;
		}
	}

	printf("Sum: %d\n", sum);
    	
	return 0;
}