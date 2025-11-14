#include <stdio.h>

void tambah(int a, int b, int *c) {
    *c = a + b;
    return *c;
}

int main(void) {
    int a = 1;
    int b = 2;
    int c;
    tambah(a, b, &c);
    printf("%d\n", c);
    return 0;
}