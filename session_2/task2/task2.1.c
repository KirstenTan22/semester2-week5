// Week 5, Session 2

/* Task 2.1
 * Temperature conversion with input validation
 * Converts temperatures between Celsius and Fahrenheit with error checking
 */

#include <stdio.h>
#include <string.h>
#include <ctype.h>  // For toupper function

int main(void) {
    char input[50];
    float temperature;
    char scale;
    int valid_input = 0;
    float converted_temp;
    char converted_scale;
    
    printf("=== Temperature Converter ===\n");
    
    // TODO: Keep asking until valid input is provided
    // Use an appropriate loop structure
    do {
        printf("Enter temperature with scale (e.g., 23.5C or 75F): ");
        
        // TODO: Use fgets to read the input
        fgets(input, sizeof(input), stdin);
        
        // TODO: Remove the newline character from input
        // Hint: input[strcspn(input, "\n")] = 0;
        input[strcspn(input, "\n")] = 0;
        
        // TODO: Parse the input to extract temperature and scale
        // Hint: Use sscanf(input, "%f%c", &temperature, &scale);
        // Advanced: Consider handling input with a degree symbol (°)
        sscanf(input, "%f%c", &temperature, &scale);
        
        // TODO: Validate the scale (must be 'C', 'c', 'F', or 'f')
        // Convert scale to uppercase for easier comparison
        // Hint: scale = toupper(scale); // toupper() converts 'c' to 'C', 'f' to 'F'
        // Note: In Python, you'd use string method: scale = scale.upper()
        scale = toupper(scale);
        
        // TODO: If input is valid, set valid_input = 1
        // If invalid, print an error message
        if (scale == 'C' || scale == 'F')
            valid_input = 1;
        else
            printf("Error: Input is invalid.\n");
    } while (valid_input == 0);
    
    // TODO: Perform conversion based on the input scale
    // - If Celsius, convert to Fahrenheit: F = C * 9/5 + 32
    // - If Fahrenheit, convert to Celsius: C = (F - 32) * 5/9
    // - Print the result with appropriate formatting, including the degree symbol (°)
    //   Hint: Use printf("%.1f°C is equal to %.1f°F\n", temperature, converted_temp);
    
    if (scale == 'C') {
        converted_temp = temperature * (9.0 / 5) + 32;
        converted_scale = 'F';
    }
    else {
        converted_temp = (temperature - 32) * (5.0 / 9);
        converted_scale = 'C';
    }

    printf("%.1f°%c is equal to %.1f°%c\n", temperature, scale, converted_temp, converted_scale);

    return 0;
}
