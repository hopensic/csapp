#include <stdio.h>
#include <limits.h>

#include "heads/bytes.h"

int main(void) {
    // show_int(258);


    //csapp2 p44
    // short int v = -12345;
    // unsigned short uv = (unsigned short) v;
    // printf("v=%d, uv=%u\n", v, uv);

    //csapp2 p44
    // unsigned u = 4294967295u;
    // int tu = (int) u;
    // printf("u=%u, tu=%d\n", u, tu);

    //csapp2 p47
    // int x = -1;
    // unsigned u = 2147483648;
    //
    // printf("x=%u = %d\n",x,x);
    // printf("u=%u = %d\n",u,u);

    // printf("%u\n", (unsigned) -2147483647);
    // printf("%u\n", -2147483648);


    //csapp2 p48
    // int a = -1;
    // int b = 0;
    // unsigned int c = 0u;
    //
    // if (-1 < 0u) printf("a<b");
    // else printf("a>b");
    //
    // printf("\n");
    //
    // if (2147483647u > -2147483647 - 1) { printf("1");}
    // else if (2147483647u == -2147483647 - 1) {printf("2");}
    // else if (2147483647u ==-2147483647 - 2) { printf("3");}
    // else {printf("4");}

    //csapp2 p49
    // short sx = -12345;
    // unsigned short usx = sx;
    // int x = sx;
    // unsigned ux = usx;
    //
    // printf("sx = %d:\t", sx);
    // show_bytes((byte_pointer) &sx, sizeof(short));
    // printf("usx = %d:\t", usx);
    // show_bytes((byte_pointer) &usx, sizeof(unsigned short));
    // printf("x = %d:\t", x);
    // show_bytes((byte_pointer) &x, sizeof(int));
    // printf("ux = %d:\t", ux);
    // show_bytes((byte_pointer) &ux, sizeof(unsigned));

    //csapp2 p50

    short sx = -12345;
    unsigned short uy = sx;
    printf("uy = %u:\t", uy);
    show_bytes((byte_pointer) &uy, sizeof(unsigned short));
}
