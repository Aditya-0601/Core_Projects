#include<stdio.h>
#include<stdlib.h>
#include <limits.h>

double simpleCalc(double num1, double num2, char op) {
    int result;

    if (op == '+') {
        result = num1 + num2;
    }
    else if (op == '-') {
        result = num1 - num2;
    }
    else if (op == '*') {
        result = num1 * num2;
    }
    else if (op == '/') {
        if (num2 != 0) {
            result = num1 / num2;
        }
        else {
            printf("Error! Division by zero.\n");
            return INT_MIN;
        }
    }
    else {
        printf("Error! Operator is not correct.\n");
        return INT_MIN;
    }

    return result;
}

int main() {
    char op;
    double num1, num2;
    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &op);
    printf("Enter two operands: ");
    scanf("%lf %lf", &num1, &num2);

    double result = simpleCalc(num1, num2, op);

    printf("Result: %.2lf\n", result);

    return 0;
}