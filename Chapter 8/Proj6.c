#include <stdio.h>

#define MESSAGE_LIMIT 32

int main(void) {
    char message[MESSAGE_LIMIT] = {};
    int i;

    printf("Enter a message: ");
    scanf("%[^\n]", message); // Read a string (including whitespaces) until scanf encounters a newline char.
    printf("In B1FF-speak: ");

    // Scan every character in the input message.
    for(i = 0; i < MESSAGE_LIMIT; i++) {

        // Check if the character is lowercase and capitalize it.
        if('z' >= message[i] >= 'a')
            message[i] = message[i] - 32;

        // Convert characters to B1FF speak.
        switch (message[i]) {
        case 'A':
            printf("4");
            break;

        case 'B':
            printf("8");
            break;

        case 'E':
            printf("3");
            break;
        
        case 'I':
            printf("1");
            break;

        case 'O':
            printf("0");
            break;

        case 'S':
            printf("5");
            break;
        
        default:
            printf("%c", message[i]);
            break;
        }
    }
    printf("!!!!!!!!!!");

    return 0;
}
