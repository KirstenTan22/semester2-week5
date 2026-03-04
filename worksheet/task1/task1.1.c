// Worksheet 2.5

/* 
 * Task 1.1 - Practice
 * Using for loop to print all prime numbers from 1 to 100.
 * recall that a prime number is a natural number greater than 1
 * and completely only divisible by 1 and itself.
 */

#include <stdio.h>
#include <stdbool.h>

int main(void) {
	bool isPrime = true;

	for (int i=2; i<=100; i++) {
		isPrime = true;
		for (int j=1; j<=i/2; j++) {
			if (i % j == 0 && j != 1) {
				isPrime = false;
				break;
			}
		}
		if (isPrime) {
			printf("%d\n", i);
		}
	}

	return 0;
}