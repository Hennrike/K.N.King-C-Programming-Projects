#include <stdio.h>

int main(void) {
    int vowel_sum;
    char c;

    printf("Enter a sentence: ");
    while((c = getchar()) != '\n') {
        switch (c) {
        case 'a': case 'e': case 'i': case 'o': case 'u':
            vowel_sum += 1;
            break;
        
        default:
            break;
        }
    }

    printf("Your sentence contains %d vowels.\n", vowel_sum);

    return 0;
}
