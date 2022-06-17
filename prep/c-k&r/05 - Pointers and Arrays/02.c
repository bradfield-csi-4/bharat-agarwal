#include <stdio.h>

void swap(int *, int *);

int main(void) {
    int first = 11, second = 22;
    swap(&first, &second);
    printf("%d, %d\n", first, second); // should be 22, 11
}

void swap(int *px, int *py) {
    int temp;
    temp = *px;
    *px = *py;
    *py = temp;
}