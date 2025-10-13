#include <ctype.h>
#include <stdlib.h>
#include <stdio.h>

#define KEY '&'

int main(int argc, char const *argv[]) {
    FILE *fp[2];
    int orig_char, new_char;

    for (int i = 1; i <= 2; i++) {
        if ((fp[i-1] = fopen(argv[i], "rb+")) == NULL) {
            fprintf(stderr, "Couldn't open the specified file name: %s\n", argv[i]);
            return EXIT_FAILURE;
        }
    }

    while ((orig_char = getc(fp[0])) != EOF) {
        new_char = orig_char ^ KEY;
        fprintf(fp[1], "%c", new_char);
    }

    return 0;
}
