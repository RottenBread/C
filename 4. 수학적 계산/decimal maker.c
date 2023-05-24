#include <stdio.h>
#include <math.h>

int main(void) {

    double result, value = 1.6;

    result = floor(value);
    printf("%lf ", result);

    result = ceil(value);
    printf("%lf ", result);
    return 0;
}