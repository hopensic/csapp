#include <assert.h>
#include <limits.h>
#include <stdio.h>

int tmul_ok(int x, int y) {
    int p = x * y;
    return !x || p / x == y;
}


int main(void) {
    assert(tmul_ok(0, 1)==1);
    assert(tmul_ok(2, 3)==1);
    assert(tmul_ok(INT_MIN, INT_MIN)==0);
    assert(tmul_ok(INT_MIN+2, INT_MIN+3)==0);
    assert(tmul_ok(INT_MAX, INT_MAX)==0);
    assert(tmul_ok(INT_MAX-10, INT_MAX-100)==0);
}
