#include <stdio.h>

int main() {
    int x, y;
    int sum, difference, product;
    double quotient;

    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    sum = x + y;
    difference = x - y;
    product = x * y;

    printf("Sum: %d\n", sum);
    printf("Difference: %d\n", difference);
    printf("Product: %d\n", product);
    printf("Quotient: %.2f\n", quotient);

    return 0;
}


