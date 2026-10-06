#include <stdio.h>

int main(void) {
    int a, b;
    char op;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &op);

    
    if (op == '+') {
        printf("Result = %d\n", a + b);
    }
    else if (op == '-') {
        printf("Result = %d\n", a - b);
    }
    else if (op == '*') {
        printf("Result = %d\n", a * b);
    }
    else if (op == '/') {
        if (b != 0)
            printf("Result = %d\n", a / b);
        else
            printf("Cannot divide by zero\n");
    }
    else {
        printf("Invalid operation\n");
    }
    return 0;
}
