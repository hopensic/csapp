#include <stdio.h>
#include <string.h>


void *memcpy(void *dest, const void *src, size_t n);

#define KSIZE 1024
char kbuf[KSIZE];

int copy_from_kernel(void *user_dest, int maxlen) {
    int len =KSIZE < maxlen? KSIZE : maxlen;
    memcpy(user_dest,kbuf,len);
    return len;
}

int test(unsigned a) {
    printf("%u",a);
}

int copy_from_kernel_test( size_t maxlen) {
    int len =KSIZE < maxlen? KSIZE : maxlen;
    printf(len);
    return len;
}


int main(void) {
    copy_from_kernel_test(-1);



}
