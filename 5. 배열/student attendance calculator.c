#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 16

int main(void) {
    int att_book[SIZE] = { 0 };
    int i, count = 0;

    for (i = 0; i < SIZE; i++) {
        printf("%d��° ���ǿ� �⼮�ϼ̳���?(�⼮��1 �Ἦ��0): ", i+1);
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
        printf("���� �ϼ��� �����մϴ�. (�Ἦ�� : %f%%). \n", ratio * 100.0);
    }
    else {
        printf("���� �ϼ��� ����մϴ�. (�Ἦ�� : %f%%). \n", ratio * 100.0);
    }

    return 0;
}