#include <stdio.h>

int main(void) {
    int a = 0xFEDCBA98 << 32;
    int b = 0xFEDCBA98 >> 36;
    unsigned c = 0xFEDCBA98u >> 40;

    printf("%x\n", a);
    printf("%x\n", b);
    printf("%x\n", c);
    printf("ssss");
    return 0;
}
