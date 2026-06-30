#include <stdio.h>

int main() {
    int choice;
    long num1, num2, result;

    printf("--- Real Calculator ---\n");
    printf("1. Addition (+)\n");
    printf("2. Subtraction (-)\n");
    printf("3. Multiplication (*)\n");
    printf("4. Division (/)\n");
    
    printf("\nOption select korun (1-4): ");
    scanf("%d", &choice);


    printf("Duiti songkha likhun (space diye): ");
    if (scanf("%ld %ld", &num1, &num2) != 2) {
        printf("Error: Input thik bhabe din!\n");
        return 1;
    }

    switch (choice) {
        case 1:
            printf("\nResult: %ld\n", num1 + num2);
            break;
        case 2:
            printf("\nResult: %ld\n", num1 - num2);
            break;
        case 3:
            printf("\nResult: %ld\n", num1 * num2);
            break;
        case 4:
            if (num2 != 0) {
                printf("\nResult: %ld\n", num1 / num2);
            } else {
                printf("\nError: 0 diye bhag kora jay na!\n");
            }
            break;
        default:
            printf("\nInvalid Choice!\n");
    }

    return 0;
}