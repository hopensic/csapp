#include <stdio.h>
#include <limits.h>
#include <assert.h>

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


/*计算x-y，如果溢出，就返回1*/

/*
 * 1. x>0  -8<y<0  x-y<0 正溢出
 * 2. x<-1 0<y<8 x-y>0  负溢出
 *
 *
 */


int tsub_ok(int x, int y) {
    int c = x - y;
    if (x > 0 && y < 0 && y > INT_MIN && c < 0) {
        printf("positive overflow\n");
        return 1;
    }
    if (x < -1 && y > 0 && y < INT_MAX && c > 0) {
        printf("negative overflow\n");
        return -1;
    }

    if (x < 0 && y == INT_MIN && c >= 0) {
        printf("negative overflow\n");
        return -1;
    }

    printf("normal\n");
    return 0;
}

int main(void) {
    assert(tsub_ok(INT_MAX,-1)==1); //正溢出
    assert(tsub_ok(INT_MIN,1)==-1); //负溢出
    assert(tsub_ok(22,1)==0); //正常


    assert(tsub_ok(1,INT_MIN)==0); //y是INT_MIN, x>0 不会溢出
    assert(tsub_ok(0,INT_MIN)==0); //y是INT_MIN, x==0 不会溢出
    assert(tsub_ok(-1,INT_MIN)==-1); //y是INT_MIN,x<0 才会负溢出
}
