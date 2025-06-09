#include <stdio.h>
#include <conio.h>

int countConsecutiveOnes() {
    int quant=0, currCount=0, maxCount=0;
    char num;

    scanf("%d", &quant);
    getchar();
    while(quant > 0) {
    
        num = getch()-48;
        printf("%d ", num);
        currCount++;

        if(num == 0) {
            currCount = 0;
        }
        else if(currCount > maxCount){
            maxCount = currCount;
        }

        quant--;
    }
    printf("\n");
    return maxCount;
}

int main(void) {
    printf("%d\n", countConsecutiveOnes());

    return 0;
}
