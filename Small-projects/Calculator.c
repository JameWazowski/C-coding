#include <stdio.h>

int main() {

    char operator;
    double num1;
    double num2;
    double result;
    
    printf("Basic Console Calculator Program");
    printf("\n--------------------------------\n\n");
    
    printf("Enter an operator (+ - * /) ");
    scanf_s("%c", &operator);
    
    printf("Enter number one: ");
    scanf_s("%lf", &num1);

    printf("Enter number two: ");
    scanf_s("%lf", &num2);

    switch(operator){
        case '+':
            result = num1 + num2;
            printf("Result of %.2lf + %.2lf = %.2lf\n", num1, num2, result);
            break;
        case '-':
            result = num1 - num2;
            printf("Result of %.2lf - %.2lf = %.2lf\n", num1, num2, result);
            break;
        case '*':
            result = num1 * num2;
            printf("Result of %.2lf - %.2lf = %.2lf\n", num1, num2, result);
            break;
        case '/':
            result = num1 / num2;
            printf("Result of %.2lf - %.2lf = %.2lf\n", num1, num2, result);
            break;
        default:
            printf("Please choose right operator! Bye!\n");
    }

    return 0;
}