#include <stdio.h>

int main(void) {
    int a, b;
    char op;

    printf("enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("enter operator: ");
    scanf(" %c", &op);

    switch (op) {
        case '+':
            printf("result = %d\n", a + b);
            break;

        case '-':
            printf("result = %d\n", a - b);
            break;

        case '*':
            printf("result = %d\n", a * b);
            break;

        case '/':
            printf("result = %d\n", a / b);
            break;

        default:
            printf("invalid operation\n");
            break;
    }

    return 0;
}