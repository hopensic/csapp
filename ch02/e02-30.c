#include <stdio.h>

// the fun will return 1 if there are no overflow when added
int tadd_ok(int x, int y) {
    int c = x + y;
    if (x < 0 && y < 0 && c >= 0) {
        printf("negative overflow\n");
        return -1;
    }
    if (x > 0 && y > 0 && c < 0) {
        printf("positive overflow\n");
        return 1;
    }
    printf("normal\n");
    return 0;
}

int e02_30(void) {
    int a = -2147483648;
    int b = -2147483648;
    // int b = 1;
    int sum = a + b;
    int c = tadd_ok(a, b);
    // printf("%d\n", a);
    // printf("%d\n", b);
    // printf("%d\n", c);
    printf("---------------\n");
    printf("sum is %d\n", sum);
}
