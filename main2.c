#include <stdio.h>

int main(void) {
    // int a = 0x10;
    // a = a<<1;

    int a = 0xa;
    int b = ~a;

    printf("a is:%x\n", a);
    printf("b is:%x\n", b);
    return 0;
}
