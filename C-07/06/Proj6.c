#include <stdio.h>

int main(void) {
    
    printf("%llu %llu %llu %llu %llu %llu",
            sizeof(int), sizeof(short), sizeof(long),
            sizeof(float), sizeof(double), sizeof(long double));

    return 0;
}
