#include <stdio.h>
#include <math.h>

int getNum() {
    int number;
    printf("���ڸ� �Է��ϼ��� : ");
    scanf("%d", &number);
    return number;
}

int main(void) {
    int x = getNum();
    int y = getNum();
    int result = x+y;
    printf("\n��� : %d", result);
    return 0;
}