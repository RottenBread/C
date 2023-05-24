#include <stdio.h>

void printOptions() {
    printf(" 'c' 섭씨온도에서 화씨온도로 변환 \n");
    printf(" 'f' 화씨온도에서 섭씨온도로 변환 \n");
    printf(" 'q' 종료 \n");
}

double C2F (double c_temp) {
    return 9.0 / 5.0 * c_temp + 32;
}

double F2C (double f_temp) {
    return (f_temp - 32.0) * 5.0 / 9.0;
}


int main(void) {
    char choice;
    double temp;
    while (1) {
        printOptions();
        printf("메뉴에서 선택하세요.");
    }
}