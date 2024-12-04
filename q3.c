#include <stdio.h>
#include <math.h>

int main() {
    int choice;
    float num1, num2, result;

    printf("Simple Calculator\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Logarithmic values\n");
    printf("6. Square roots\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 5 || choice == 6) {
        printf("Enter a number: ");
        scanf("%f", &num1);
    } else {
        printf("Enter the first number: ");
        scanf("%f", &num1);
        printf("Enter the second number: ");
        scanf("%f", &num2);
    }

    switch (choice) {
        case 1: 
            result = num1 + num2;
            printf("Result: %f\n", result);
            break;
        case 2: 
            result = num1 - num2;
            printf("Result: %f\n", result);
            break;
        case 3: 
            result = num1 * num2;
            printf("Result: %f\n", result);
            break;
        case 4: 
            if (num2 != 0) {
                result = num1 / num2;
                printf("Result: %f\n", result);
            } else {
                printf("Error! Division by zero.\n");
            }
            break;
        case 5: 
            if (num1 > 0) {
                result = log(num1);
                printf("Logarithmic value: %f\n", result);
            } else {
                printf("Error! Logarithm of non-positive number.\n");
            }
            break;
        case 6: 
            if (num1 >= 0) {
                result = sqrt(num1);
                printf("Square root: %f\n", result);
            } else {
                printf("Error! Square root of negative number.\n");
            }
            break;
        default: 
            printf("Invalid choice.\n");
    }

    return 0;
}
