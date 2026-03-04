//Week 5, Session 2

# include <stdio.h>

int main(void){
/* Task 1.3
 * You have to decide which type of loop (for, while, do...while) to use.
 * Write a C program to read a series of integers from the user and sum them
 * until a 0 (zero) is entered. Print the sum at the end.
 */
    int num;
    int sum = 0;

    do {
        printf("Enter an integer: ");
        scanf(" %d", &num);
        sum += num;
    } while (num != 0);

    printf("%d\n", sum);


    return 0;
}