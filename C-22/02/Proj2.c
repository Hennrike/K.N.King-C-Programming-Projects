#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
    FILE *fp;
    char ch;

    if (argc != 2) {
        fprintf(stderr, "%s expected only 1 file name argument.\n", argv[0]);
        return EXIT_FAILURE;
    }

    if ((fp = fopen(argv[1], "r+")) == NULL) {
        fprintf(stderr, "Couldn't open the specified file name: %s\n", argv[1]);
        return EXIT_FAILURE;
    }

    while ((ch = getc(fp)) != EOF) {
        if (ch >= 97 && ch <= 122) {
            ch += -32;
        }

        fprintf(stdout, "%c", ch);
    }

    fclose(fp);

    return 0;
}
