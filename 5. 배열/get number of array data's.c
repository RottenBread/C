#include <stdio.h>

int main(void) { 
    int scores[] = {10, 9, 5, 4, 1};
    int size;

    size = sizeof(scores) / sizeof(scores[0]);
    printf("%d", size);

}