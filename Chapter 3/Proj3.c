#include <stdio.h>

int main(void) {
    int gs1, groupID, pubCode, itemNum, checkDigit;

    printf("Enter ISBN: ");
    scanf("%d-%d-%d-%d-%d", &gs1, &groupID, &pubCode, &itemNum, &checkDigit);

    printf("GS1 prefix: %d\n", gs1);
    printf("Group identifier: %d\n", groupID);
    printf("Publisher code: %d\n", pubCode);
    printf("Item number: %d\n", itemNum);
    printf("Check digit: %d\n", checkDigit);

    return 0;
}