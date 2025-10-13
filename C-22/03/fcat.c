#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
    FILE *fp;
    char ch;

    if (argc < 2) {
        fprintf(stderr, "%s expected atleast 1 file name argument.\n", argv[0]);
        return EXIT_FAILURE;
    }

    for (int i = 1; i < argc; i++) {
        if ((fp = fopen(argv[i], "r+")) == NULL) {
            fprintf(stderr, "Couldn't open the specified file name: %s\n", argv[i]);
            return EXIT_FAILURE;
        }

        while ((ch = getc(fp)) != EOF) {
            fprintf(stdout, "%c", ch);
        }

        fclose(fp);
    }

    return 0;
}
