#include <stdio.h>
#include <string.h>

#define SIZE 20

int main(int argc, char const *argv[]) {
    char word[SIZE + 1], smallest_word[SIZE + 1], largest_word[SIZE + 1];

    printf("Enter word: ");
    scanf("%20s", word);
    strcpy(smallest_word, word);
    strcpy(largest_word, word);

    while(strlen(word) != 4) {
        printf("Enter word: ");
        scanf("%s", word);

        if(strcmp(word, smallest_word) < 0)
            strcpy(smallest_word, word);
        else if(strcmp(word, largest_word) > 0)
            strcpy(largest_word, word);
    }

    printf("Smallest word: %s\n", smallest_word);
    printf("Largest word: %s\n", largest_word);

    return 0;
}
