#include <stdio.h>

void inplace_swap(int *x, int *y) {
    *y = *x ^ *y;
    *x = *x ^ *y;
    *y = *x ^ *y;
}


void reverse_array(int a[], int cnt) {
    int first, last;
    for (first = 0, last = cnt - 1; first < last; first++, last--) {
        inplace_swap(&a[first], &a[last]);
    }
}


int main(void) {
    int a[] = {1, 2, 3, 4};
    int cnt = sizeof(a) / sizeof(a[0]);
    reverse_array(a, cnt);
    for (int i = 0; i < cnt; i++) {
        printf("%d ", a[i]);
    }


    return 0;
}
