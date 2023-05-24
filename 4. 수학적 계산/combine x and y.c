#include <stdio.h>
#include <math.h>

int getNum() {
    int number;
    printf("숫자를 입력하세요 : ");
    scanf("%d", &number);
    return number;
}

int main(void) {
    int x = getNum();
    int y = getNum();
    int result = x+y;
    printf("\n결과 : %d", result);
    return 0;
}