#include <stdio.h>

int fun1(unsigned word) {
    return (int) ((word << 24) >> 24);
}


int main(void) {
    int a = 0x000000c9;
    int b = fun1(a);
    printf("%x \n", b);
}
