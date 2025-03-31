#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    srand(time(0)); 
    int number = rand() % 100 + 1; 
    int count = 0; 
    int guess = 0; 

    printf("我已经想好了一个1到100之间的数。\n");

    do {
        printf("请猜猜这个数: ");
        scanf("%d", &guess); 
        count++;

        if (guess > number) {
            printf("太大了！\n");
        } else if (guess < number) {
            printf("太小了！\n");
        } else {
            printf("恭喜你，猜对了！你一共猜了%d次。\n", count);
        }
    } while (guess != number); 

    return 0;
}
