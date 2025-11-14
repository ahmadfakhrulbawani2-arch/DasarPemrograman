#include <stdio.h>

int main() {
    int var  = 55;
    int *ptr = &var;

    printf("%d\n", *ptr);
    *ptr = 20;

    printf("%d\n", *ptr);
    printf("%d\n", var);
}