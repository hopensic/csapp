#include <stdio.h>
#include <string.h>


int strlonger(char *s, char *t) {
    printf("len(s):%d\n", strlen(s));
    printf("len(t):%d\n", strlen(t));
    unsigned d = strlen(s) - strlen(t);
    printf("d:%u\n", d);
    return strlen(s) - strlen(t) > 0;
}


int main(void) {
    char *a = "hello world";
    char *b = "hello world";
    int res = strlonger(b, a);
    printf("%d\n", res);
}
