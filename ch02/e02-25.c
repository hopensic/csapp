#include <stdio.h>


float sum_elements(float a[], unsigned length) {
    int i;
    float result = 0;

    for (i = 0; i < length ; i++) {
        result += a[i];
    }
    return result;
}


int main(void) {
    float a[] = {1.0, 2.0, 3.0, 4.0};
    float d = sum_elements(a, 0);
    printf("%f\n", d);
}
