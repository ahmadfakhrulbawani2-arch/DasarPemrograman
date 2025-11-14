#include <stdio.h>

int main(void) {
    int var = 23;
    int *ptr = &var;
    int **dbPtr = &ptr;

    printf("%d\n", **dbPtr); // nilai var yaitu 23
    printf("0x%p\n", *dbPtr); // &var (adress var)
    printf("0x%p\n", dbPtr); // &ptr (adress ptr)
    // printf("%p", ***dbPtr); error kalau kelebihan
    
    return 0;
}