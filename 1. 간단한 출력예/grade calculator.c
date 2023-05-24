#include <stdio.h>

int main(void){
    int grade, n;
    float sum, average;

    n = 0;
    sum = 0;
    grade = 0;

    printf("성적 입력을 종료하려면 음쑤를 입력하세요.");

    while (grade >= 0) {
        printf("성적을 입력하시오 : ");
        scanf("%d", &grade);

        sum += grade;
        n++;
    }
    sum = sum - grade;
    n--;

    average = sum / n;
    printf("성적의 평균은 %.2f입니다. \n", average);

    return 0;
}