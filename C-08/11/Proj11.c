#include <stdio.h>

int main(void) {
    char alpha, num[15];
    int i = 0;

    printf("Enter phone number: ");
    while((alpha = getchar()) != '\n') {
        switch (alpha) {
        case 'A': case 'B': case 'C':
            num[i] = '2';
            break;
        case 'D': case 'E': case 'F':
            num[i] = '3';
            break;
        case 'G': case 'H': case 'I':
            num[i] = '4';
            break;
        case 'J': case 'K': case 'L':
            num[i] = '5';
            break;
        case 'M': case 'N': case 'O':
            num[i] = '6';
            break;
        case 'P': case 'Q': case 'R': case 'S':
            num[i] = '7';
            break;
        case 'T': case 'U': case 'V':
            num[i] = '8';
            break;
        case 'W': case 'X': case 'Y': case 'Z':
            num[i] = '9';
            break;
        default:
            num[i] = alpha;
            break;
        }

        i++;
    }

    printf("In numeric form: %s", num);

    return 0;
}
