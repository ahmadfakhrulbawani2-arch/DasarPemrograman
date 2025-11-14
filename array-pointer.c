#include <stdio.h>

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int i;
    for (i = 0; i < 5; ++i) {
        printf("&arr[%d] => %p\n", i, &arr[i]);
    }

    printf("Address of arr => %p\n", arr); // alamat arr[0]
    return 0;
}

/*

-  arr + 0 = arr[0];
-  arr + 1 = arr[1];
-  arr + 2 = arr[2];
-  dst

*/