#include <stdio.h>
#include <limits.h>

#include "heads/bytes.h"

int main(void) {
    unsigned a = 4294967295;
    unsigned b = 1;
    unsigned c = a + b;

    printf("%u\n", a);
    printf("%u\n", b);
    printf("%u\n", c);
}
