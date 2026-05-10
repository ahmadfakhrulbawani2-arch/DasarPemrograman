#include <stdio.h>
#include <stdlib.h>

int main() {
    int x;
    scanf("%d", &x);
    int *a = malloc(x*x * sizeof(int));
    if(a == NULL) {
        printf("Gagal alokasi memory");
        return 0;
    }

    for(int i = 0; i < x; i++) {
        for(int j = 0; j < x; j++) {
            scanf("%d", (a + i*x) + j);
        }
    }

    int y;
    scanf("%d", &y);

    // backup data lama supaya tidak ketimpa. Karena realloc ada kemungkinan buat memory baru jadi kita copy paste data lama sementara baru kita paste lagi ke a
    int *backup = malloc(x*x * sizeof(int));
    for(int i = 0; i < x*x; i++) {
        *(backup + i) = *(a + i);
    }

    // realloc
    a = realloc(a, y*y * sizeof(int));
    if (a == NULL) {
        printf("Gagal realloc memory");
        free(backup);
        return 0;
    }

    for(int i = 0; i < y; i++) {
        for(int j = 0; j < y; j++) {
            if(i >= x || j >= x) {
                *((a + i*y) + j) = 0;
            } else {
                *((a + i*y) + j) = *((backup + i*x) + j); // baca dari backup, aman
            }
            printf("%d ", *((a + i*y) + j));
        }
        printf("\n");
    }

    free(backup);
    free(a);
    return 0;
}
