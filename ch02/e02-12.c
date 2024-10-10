#include <stdio.h>

int main(void) {
    int a = 0x87654321;
    int b = 0xFF;
    unsigned int c = ~0;
    printf("%x\n", a & b); //0x00000021
    // printf("%x\n", c);

    // int d = c >> (sizeof(int) * 8);
    unsigned int d = c << 8;
    // printf("%x\n", d);
    printf("%x\n", (~a & d) ^ 0x21); //789abc21
    printf("%x\n", a ^ ~0xFF);


    printf("%x\n", (a & d) ^ 0xFF); //876543ff
    printf("%x\n", a | 0xFF); //876543ff

    return 0;
}
