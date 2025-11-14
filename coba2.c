#include <stdio.h>

int main()
{
    int arr[5] = {1, 2, 3, 4, 5}, i;
    int *ptr = arr;

    for (i = 0; i < 5; ++i) {
        printf("%d ", *(ptr+i)); // *(ptr+i) sama dengan arr[i]
    }
    return 0;
}