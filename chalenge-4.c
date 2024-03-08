#include <stdio.h>

float calculate(float a, float b, char operator) {
if (operator == '+') {
    return (float)a + b;
    } else if (operator == '-') {
    return (float)a - b;
    } else if (operator == '*') {
    return (float)a * b;
    } else if (operator == '/') {
    return (float)a / b;
    }else if (operator == '%') {
    return (int) a % (int)b;
    }
    } 


int main() {
    int num1, num2;
    char operator;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter an operator (+, -, *, /, %%): ");
    scanf(" %c", &operator); 

    printf("Enter second number: ");
    scanf("%d", &num2);

    float result = calculate(num1, num2, operator);

    if (result >= 0.0f) { 
            printf("The result is: %.2f", result);
        }

    return 0;
}
