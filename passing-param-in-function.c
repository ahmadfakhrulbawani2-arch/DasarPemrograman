#include <stdio.h>

void change(int a, int b) { // a dan b adalah variable baru hanya untuk change() (scopes variables).
    a = a + 5;
    b = b + 5;
}

int main()
{
    int x = 10, y = 6;
    change(x, y); // passing by value. Kita copy nilai x dan y ke a dan b.
    printf("%d %d\n", x, y);

    return 0;
}

/*

-- jadi function diatas melakukan seperti ini kurang lebih:

    change(int a, int b) {...}

    change(x, y);

    itu seperti melakukan:
    a = x;
    b = y;

*/

/*

#include <stdio.h>

void change(int *a, int *b) { // a dan b adalah variable baru hanya untuk change() (scopes variables).
    a = a + 5;
    b = b + 5;
}

int main()
{
    int x = 10, y = 6;
    change(&x, &y); // passing by references. Kita modifikasi nilai x dan y di dalam change via pointer *a dan *b. (literally masukin x dan y)
    
    printf("%d %d\n", x, y);

    return 0;
}

*/