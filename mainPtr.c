#include <stdio.h>
#include <string.h>

int main() {
    int *ptr, *var; // var tanpa * akan error
    int x = 10;
    var = &x;
    printf("%d", *var);
    return 0;
}

// & merupakan operator alamat jika disandingkan variable dan * adalah dereference yang akan mengakses nilai dalam alamat.

/*

-  kita pakai * di inisialisasi variable untuk membuat pointer
-  jika pointer menyimpan alamat suatu variable misal:

    int *ptr, var = 50;
    *ptr = &var;

-  maka *ptr itu sama dengan var (saling terhubung). Sehingga:
    
    *ptr = 10; // kita akan set var menjadi 10 juga
    printf("%d", *ptr);

akan muncul 10 dan nilai var juga menjadi 10.

*/