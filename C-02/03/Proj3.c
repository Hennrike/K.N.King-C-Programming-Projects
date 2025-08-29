#include <stdio.h>

int main(void) {
    float r;

    printf("Enter a sphere radius: ");
    scanf("%f", &r);

    printf("\nSphere volume: %.2f\n", 4.0f/3.0f * 3.14f * r * r * r);

    return 0;
}
