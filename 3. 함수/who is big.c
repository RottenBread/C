#include <stdio.h>

int max(int x, int y) {
	if (x > y)
		return x;
	else
		return y;
}

int main(void) {
    int value;
    value = max(10, 20);
    printf("%d", value);
}