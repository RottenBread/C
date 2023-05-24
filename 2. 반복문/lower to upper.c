#include <stdio.h>

#define SEED_MOENY 10000000
#define DATE 10
#define RATE 0.07

int main(void) {
	int i;
	double total = SEED_MOENY;

	printf("=============\n");
	printf("연도 복리금\n");
	printf("=============\n");
	for (i = 1; i <= DATE; i++) {
		total = total * (1 + RATE);
		printf("%d %10.1f\n", i, total);
	}
	return 0;
}