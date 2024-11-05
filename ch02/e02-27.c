#include <stdio.h>

// the fun will return 1 if there are no overflow when added
int uadd_ok(unsigned x, unsigned y) {
    unsigned s = x + y;
    if (s < x || s < y) {
        return 0;
    } else {
        return 1;
    }
}


int main(void) {
    unsigned a = 4294967295;
    unsigned b = 1;
    printf("%u\n", a);
    int c = uadd_ok(a, b);
    printf("%d\n", c);
}
