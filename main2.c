#include <stdio.h>

#include "heads/bytes.h"

int main(void) {
    // show_int(258);


    //csapp2 p44
    // short int v = -12345;
    // unsigned short uv = (unsigned short) v;
    // printf("v=%d, uv=%u\n", v, uv);

    //csapp2 p44
    unsigned u = 4294967295u;
    int tu = (int) u;
    printf("u=%u, tu=%d\n", u, tu);
}
