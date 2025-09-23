#include <stdio.h>

#define N 10

void selection_sort(int a[], int size);

int main(void) {
    
    int a[N], i;

    printf("Enter %d integers to be sorted: ", N);
    for(i = 0; i < N; i++) {
        scanf("%d", &a[i]);
    }

    selection_sort(a, N);

    printf("Sorted integers:\n");
    for(i = 0; i < N; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}


void selection_sort(int a[], int size) {
    int max_i, max = 0;

    for(int i = 0; i < size; i++) {
        if(a[i] > max) {
            max = a[i];
            max_i = i;
        }
    }
    a[max_i] = a[size - 1];
    a[size - 1] = max;

    if(size >= 2)
        selection_sort(a, size - 1);
}
