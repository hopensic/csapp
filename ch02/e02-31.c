#include <stdio.h>

int tadd_ok_with_bug(int x, int y) {
    int sum = x + y;
    printf("sum = %d\n", sum);
    return (sum - x == y) && (sum - y == x);
}

int main(void) {
    // int a = -2147483648;
    // int b = -2147483648 / 2;
    int a = 2147483647;
    int b = 1;
    printf("a=:%d  b=%d\n", a, b);
    int c = tadd_ok_with_bug(a, b);
    printf("c=%d\n", c);
}
