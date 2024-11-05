#include <stdio.h>
#include <limits.h>

#include "heads/bytes.h"

int main(void) {
    int a = -2147483648;
    int b = -a;
    unsigned c = a + b;

    printf("%d\n", a);
    printf("%d\n", b);
    printf("%d\n", c);
}
