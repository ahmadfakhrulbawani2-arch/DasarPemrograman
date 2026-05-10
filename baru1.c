#include <stdio.h>
#include <stdlib.h>

int main() {
    int x;
    scanf("%d", &x);
    int *a = (int*) malloc(x*x * sizeof(int)); // array dinamis awal
    if(a == NULL) {
        printf("Gagal alokasi memory");
        free(a);
        return 0;
    }

    for(int i = 0; i < x; i++) {
        for(int j = 0; j < x; j++) {
            scanf("%d", (a + i*x) + j);
        }
    }

    int y;
    scanf("%d", &y);
    int b[y][y]; // array kedua
    for(int i = 0; i < y; i++) {
        for(int j = 0; j < y; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    // cek realloc
    int *temp = (int*) realloc(a, y*y * sizeof(int));
    if (temp == NULL) {
        printf("Gagal realloc memory");
        free(a);        
        return 0;
    }
    a = temp;

    // isi A dengan elemen B (pakai ukuran baru: y)
    for(int i = 0; i < y; i++) {
        for(int j = 0; j < y; j++) {
            *((a + i*y) + j) = b[i][j];
            printf("%d ", *((a + i*y) + j));
        }
        printf("\n");
    }
    
    free(a); // gak perlu free(temp) karena a => temp;
    return 0;
}
