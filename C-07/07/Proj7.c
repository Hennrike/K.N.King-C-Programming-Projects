#include <stdio.h>

int main(void) {
    int n1, d1, n2, d2;
    char c;

    printf("Enter two fractions separated by any arithmetic operator: ");
    scanf("%d/%d%c%d/%d", &n1, &d1, &c, &n2, &d2);

    switch (c) {
    case '+':
        printf("The sum is: %d/%d", (n1*d2)+(n2*d1), d1*d2);
        break;

    case '-':
        printf("The sum is: %d/%d", (n1*d2)-(n2*d1), d1*d2);
        break;

    case '*':
        printf("The sum is: %d/%d", n1*n2, d1*d2);
        break;

    case '/':
        printf("The sum is: %d/%d", n1*d2, d1*n2);
        break;
    
    default:
        break;
    }

    return 0;
}
