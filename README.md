# calculator
	
#include <stdio.h>

int main() {
    int a, b, choice;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    printf("\nChoose operation:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    if(choice == 1) {
        printf("Result = %d", a + b);
    }
    else if(choice == 2) {
        printf("Result = %d", a - b);
    }
    else if(choice == 3) {
        printf("Result = %d", a * b);
    }
    else if(choice == 4) {
        printf("Result = %d", a / b);
    }
    else {
        printf("Invalid choice");
    }

    return 0;
}
