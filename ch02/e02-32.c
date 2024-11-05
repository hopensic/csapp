#include <stdio.h>

// the fun will return 1 if there are no overflow when added
int tadd_ok(int x, int y) {
    int c = x + y;
    if (x < 0 && y < 0 && c >= 0) {
        printf("negative overflow\n");
        return -1;
    }
    if (x > 0 && y > 0 && c < 0) {
        printf("positive overflow\n");
        return 1;
    }
    printf("normal\n");
    return 0;
}




int tsub_ok(int x, int y) {
   return tadd_ok(x,-y);
}

int main(void) {
    // int a = -2147483648;
    // int b = -2147483648 / 2;
    int a = -1;
    int b = -2147483648;
    printf("a=:%d  b=%d\n", a, b);
    int c = tsub_ok(a, b);
    printf("c=%d\n", c);
}
