// Q1.
#include <stdio.h>

int main() {
    int num, original, remainder, result = 0, n = 0;
    printf("Enter an integer: ");
    scanf("%d", &num);
    original = num;
    while (original != 0) {
        original /= 10;
        n++;
    }
    original = num;
    while (original != 0) {
        remainder = original % 10;
        int power = 1;
        for (int i = 0; i < n; i++) {
            power *= remainder;
        }
        result += power;
        original /= 10;
    }
    if (result == num)
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);
    return 0;
}

// Q2.
#include <stdio.h>

int main() {
    int a, b;
    printf("Enter the first integer: ");
    scanf("%d", &a);
    printf("Enter the second integer: ");
    scanf("%d", &b);
    while (a != b) {
        if (a > b)
            a -= b;
        else
            b -= a;
    }
    printf("HCF = %d\n", a);
    return 0;
}

// Q3.
#include <stdio.h>

int main() {
    int a, b;
    printf("Enter the first integer: ");
    scanf("%d", &a);
    printf("Enter the second integer: ");
    scanf("%d", &b);
    while (b != 0) {
        int temp = (~a) & b;
        a = a ^ b;
        b = temp << 1;
    }
    printf("Result of subtraction = %d\n", a);
    return 0;
}

// Q4.
Method 1: Using a Temporary Variable
#include <stdio.h>

int main() {
    int a, b, temp;
    printf("Enter the first integer: ");
    scanf("%d", &a);
    printf("Enter the second integer: ");
    scanf("%d", &b);

    temp = a;
    a = b;
    b = temp;

    printf("After swap: a = %d, b = %d\n", a, b);
    return 0;
}
Method 2: Using Addition and Subtraction
#include <stdio.h>

int main() {
    int a, b;
    printf("Enter the first integer: ");
    scanf("%d", &a);
    printf("Enter the second integer: ");
    scanf("%d", &b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("After swap: a = %d, b = %d\n", a, b);
    return 0;
}
Method 3: Using Multiplication and Division
#include <stdio.h>

int main() {
    int a, b;
    printf("Enter the first integer: ");
    scanf("%d", &a);
    printf("Enter the second integer: ");
    scanf("%d", &b);

    if (a != 0 && b != 0) {
        a = a * b;
        b = a / b;
        a = a / b;

        printf("After swap: a = %d, b = %d\n", a, b);
    } else {
        printf("Cannot swap using multiplication/division if one value is zero.\n");
    }
    return 0;
}
Method 4: Using XOR Bitwise Operation
#include <stdio.h>

int main() {
    int a, b;
    printf("Enter the first integer: ");
    scanf("%d", &a);
    printf("Enter the second integer: ");
    scanf("%d", &b);

    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    printf("After swap: a = %d, b = %d\n", a, b);
    return 0;
}

// Q5.
#include <stdio.h>

int main() {
    int num, sum = 0;
    printf("Enter an integer: ");
    scanf("%d", &num);

    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }

    if (sum == num)
        printf("%d is a Perfect Number.\n", num);
    else
        printf("%d is not a Perfect Number.\n", num);

    return 0;
}

// Q6.
#include <stdio.h>

int main() {
    int x, y;
    
    printf("Enter the x-coordinate: ");
    scanf("%d", &x);
    
    printf("Enter the y-coordinate: ");
    scanf("%d", &y);

    if (x > 0 && y > 0)
        printf("The coordinate point (%d, %d) lies in the First quadrant.\n", x, y);
    else if (x < 0 && y > 0)
        printf("The coordinate point (%d, %d) lies in the Second quadrant.\n", x, y);
    else if (x < 0 && y < 0)
        printf("The coordinate point (%d, %d) lies in the Third quadrant.\n", x, y);
    else if (x > 0 && y < 0)
        printf("The coordinate point (%d, %d) lies in the Fourth quadrant.\n", x, y);
    else if (x == 0 && y != 0)
        printf("The coordinate point (%d, %d) lies on the Y-axis.\n", x, y);
    else if (y == 0 && x != 0)
        printf("The coordinate point (%d, %d) lies on the X-axis.\n", x, y);
    else
        printf("The coordinate point (%d, %d) lies at the origin.\n", x, y);

    return 0;
}
// Q7.
#include <stdio.h>

int main() {
    int choice;
    printf("Choose an option:\n");
    printf("1. Binary to Decimal\n");
    printf("2. Decimal to Binary\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    if (choice == 1) {
        int binary, decimal = 0, base = 1, remainder;
        
        printf("Enter a binary number: ");
        scanf("%d", &binary);

        while (binary > 0) {
            remainder = binary % 10;
            decimal += remainder * base;
            binary /= 10;
            base *= 2;
        }
        
        printf("Decimal equivalent: %d\n", decimal);
    }
    else if (choice == 2) {
        int decimal, binary = 0, base = 1, remainder;
        
        printf("Enter a decimal number: ");
        scanf("%d", &decimal);

        while (decimal > 0) {
            remainder = decimal % 2;
            binary += remainder * base;
            decimal /= 2;
            base *= 10;
        }
        
        printf("Binary equivalent: %d\n", binary);
    }
    else {
        printf("Invalid choice!\n");
    }

    return 0;
}
// Q8.
#include <stdio.h>

int main() {
    int rows = 5;
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d", (i + j) % 2);
        }
        printf("\n");
    }
    return 0;
}
// Q9.
#include <stdio.h>

int main() {
    int rows = 5;
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d", (j + 1) % 2);
        }
        printf(" ");
        for (int j = 1; j <= i; j++) {
            printf("%d", (j + 1) % 2);
        }
        printf("\n");
    }
    return 0;
}
// Q10.
#include <stdio.h>

int main() {
    int rows = 5, value = 1;
    for (int i = 0; i < rows; i++) {
        for (int space = 1; space <= rows - i; space++)
            printf(" ");
        for (int j = 0; j <= i; j++) {
            if (j == 0 || i == 0)
                value = 1;
            else
                value = value * (i - j + 1) / j;
            printf("%d ", value);
        }
        printf("\n");
    }
    return 0;
}

