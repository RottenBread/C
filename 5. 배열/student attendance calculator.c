#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 16

int main(void) {
    int att_book[SIZE] = { 0 };
    int i, count = 0;

    for (i = 0; i < SIZE; i++) {
        printf("%d번째 강의에 출석하셨나요?(출석은1 결석은0): ", i+1);
        scanf("%d", &att_book[i]);
        if (att_book[i] == 0) {
            count++;
        }
        else if (att_book[i] == 1) {
            continue;
        }
        else {
            i -= 1;
        }
    }

    double ratio = count / 16.0;
    if (ratio > 0.3) {
        printf("수업 일수가 부족합니다. (결석률 : %f%%). \n", ratio * 100.0);
    }
    else {
        printf("수업 일수가 충분합니다. (결석률 : %f%%). \n", ratio * 100.0);
    }

    return 0;
}