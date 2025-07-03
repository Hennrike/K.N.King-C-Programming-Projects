#include <stdio.h>

int main(void) {
    int areaCode, num1, num2;

    printf("Enter phone number [(xx) xxxxx-xxxx]: ");
    scanf("(%d) %d-%d", &areaCode, &num1, &num2);
    printf("You entered %d.%d.%d", areaCode, num1, num2);

    return 0;
}
