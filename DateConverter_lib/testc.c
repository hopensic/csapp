#include <stdio.h>

// the fun will return 1 if there are no overflow when added
int tadd_ok(int x, int y) {
    int c = x + y;
    if (x < 0 && y < 0 && c >= 0) {
        printf("negative overflow\n");
        return 0;
    }
    if (x > 0 && y > 0 && c < 0) {
        printf("positive overflow\n");
        return 0;
    }
    printf("normal\n");
    return 1;
}
