#include <stdio.h>

int bis(int x, int m);

int bic(int x, int m);


int bis(int x, int m) {
    return x | m;
}

int bic(int x, int m) {
    return (x | m) ^ m;
}


int bool_or(int x, int y) {
    int result = bis(x, y);
    printf("%x\n", result);
    return result;
}

int bool_xor(int x, int y) {
    int result = bic(x, y);
    printf("%x\n", result);
    return result;
}


int main(void) {
    int x = 0x1010;
    int m = 0x0110;
    bool_or(x, m);
    bool_xor(x, m);

    return 0;
}
