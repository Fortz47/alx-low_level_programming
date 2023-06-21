#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "operations.h"

int main(int argc, char *argv[]) {
    if (argc != 4) {
        printf("Error\n");
        return 98;
    }

    int num1 = atoi(argv[1]);
    int num2 = atoi(argv[3]);
    char operator = argv[2][0];

    int result;
    if (operator == '+') {
        result = add(num1, num2);
    } else if (operator == '-') {
        result = subtract(num1, num2);
    } else if (operator == '*') {
        result = multiply(num1, num2);
    } else if (operator == '/') {
        if (num2 == 0) {
            printf("Error\n");
            return 100;
        }
        result = divide(num1, num2);
    } else if (operator == '%') {
        if (num2 == 0) {
            printf("Error\n");
            return 100;
        }
        result = modulo(num1, num2);
    } else {
        printf("Error\n");
        return 99;
    }

    printf("%d\n", result);
    return 0;
}

