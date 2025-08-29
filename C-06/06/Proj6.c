#include <stdio.h>

int main(void) {
    int num, square = 2;

    printf("Enter a number: ");
    scanf("%d", &num);

    do {
        printf("%d\n", square*square);
        square += 2;
    } while(square*square < num);

    printf("%d\n", num);

    return 0;
}
