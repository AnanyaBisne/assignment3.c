#include <stdio.h>

int main() {
    int num1, num2;
    char op;

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &op);   

    printf("Enter first number: ");
    int num;
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    switch(op) {
        case '+':
            printf("%d + %d = %d\n", num1, num2, num1 + num2);
            break;
        case '-':
            printf("%d - %d = %d\n", num2, num2, num1 - num2);
            break;
        case '*':
            printf("%d * %d = %d\n", num1, num2 , num1 * num2);
            break;
        case '/':
            if (num2 != 0)
                printf("%d / %d = %d\n", num1, num2 , num1 / num2);
            else
                printf("Error! Division by zero is not allowed.\n");
            break;
        default:
            printf("Invalid operator!\n");
    }

    return 0;
}
