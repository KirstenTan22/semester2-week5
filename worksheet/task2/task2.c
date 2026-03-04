/*
 * Sem 2, week 5
 *
 * Portfolio submission: Hexadecimal to Decimal Converter
 * Name: Kirsten Tan
 * ID: 201889907
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>

int main(void){
	long decimal=0;
	int len, digit;
	char hex[9], c;
	
	printf("Enter a hexadecimal: ");
	scanf("%s", hex);

	hex[strcspn(hex, "\n")] = 0; // Convert newline char to 0
	len = strlen(hex);	// Get length of hex

	// Convert to decimal
	for (int i=0; i<len; i++) {
		c = toupper(hex[i]);
		digit = 0;

		if (c >= '0' && c <= '9') {
			digit = c - '0';
		} else if (c >= 'A' && c <= 'F') {
			digit = c - 'A' + 10;
		} else {
			// if input contains invalid hex digit
			printf("Error: Invalid Hexadecimal\n");
			return 1;
		}

		decimal = decimal * 16 + digit;
	}
	
	// print the decimal result
	printf("decimal: %ld\n", decimal);
	
	return 0;
}