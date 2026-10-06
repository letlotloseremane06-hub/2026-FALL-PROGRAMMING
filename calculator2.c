#include <stdio.h>

int main(void)
{
    int a, b ;
    char op;
    
     switch (op) {
        case '+':
            printf("Result = %d\n", a + b);
            break;

        case '-':
            printf("Result = %d\n", a - b);
            break;

        case '*':
            printf("Result = %d\n", a * b);
            break;

        case '/':
            if (b != 0)
                printf("Result = %d\n", a / b);
            else
                printf("Cannot divide by zero\n");
            break;

        default:
            printf("Invalid operation\n");
    }

    return 0;
}
