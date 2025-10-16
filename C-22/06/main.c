#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, char const *argv[]) {
    FILE *fp;
    int rc, i, bytes_read;
    unsigned char chars[10];
    unsigned long long int offset = 0;

    if (argc == 2) {
        if((fp = fopen(argv[1], "rb")) != NULL) {
            printf("%s\t%17s%12s\t%s\n", "Offset", "Bytes", "", "Characters");
            printf("------\t");
            for (i = 0; i < 10 * 3 - 1; i++) {
                printf("-");
            }
            printf("\t");
            for (i = 0; i < 10; i++) {
                printf("-");
            }
            printf("\n");

            while ((bytes_read = fread(chars, sizeof(unsigned char), 10, fp)) > 0) {
                printf("%6d\t", offset);

                for (i = 0; i < 10; i++) {
                    if (i >= bytes_read) {
                        printf("%2s ", "");
                    }
                    else {
                        printf("%2.2X ", chars[i]);
                    }
                }
                printf("\t");

                for (i = 0; i < bytes_read; i++) {
                    printf("%c", isprint(chars[i]) ? chars[i] : '.');
                }
                printf("\n");
                offset += 10;
            }

            fclose(fp);
            rc = EXIT_SUCCESS;
        } 
        else {
            fprintf(stderr, "Couldn't open the specified file name: %s\n", argv[1]);
            rc = EXIT_FAILURE;
        }
    } 
    else {
        fprintf(stderr, "%s expected only 1 file name argument.\n", argv[0]);
        rc = EXIT_FAILURE;
    }

    return rc;
}
