#include <stdio.h>

int main(void) {
    char first[10], last[10];
    
    printf("Enter a first and last name: ");
    scanf("%s %s", &first, &last);

    printf("%s, %c.", last, first[0]);

    return 0;
}
