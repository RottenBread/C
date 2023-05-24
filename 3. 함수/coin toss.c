#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int coin_toss(void);

int main (void) {
    int toss;
    int heads = 0;
    int tails = 0;
    srand((unsigned)time(NULL));

    for (toss = 0; toss < 1000000000; toss ++) {
        if (coin_toss() == 1)
            printf("%d", toss);
            heads ++;
        else
            printf("%d", toss);
            tails ++;
    }
    printf("동전의 앞면 : %d \n", heads);
    printf("동전의 뒷면 : %d \n", tails);
    return 0;
}

int coin_toss(void) {
    int i = rand()%2;
    if (i == 0)
        return 0;
    else
        return 1;
}