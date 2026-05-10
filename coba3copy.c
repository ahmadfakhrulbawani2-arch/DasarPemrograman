#include <stdio.h>
#include <stdlib.h>

int main() {
    int X;
    scanf("%d", &X);

    int *data = malloc(X*X * sizeof(int));
    if (!data) {
        printf("Gagal alokasi memory\n");
        return 1;
    }

    int **mat = malloc(X * sizeof(int*));
    if (!mat) {
        printf("Gagal alokasi memory\n");
        free(data);
        return 1;
    }

    for (int i = 0; i < X; i++) mat[i] = data + i * X;

    for (int i = 0; i < X; i++) {
        for (int j = 0; j < X; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    int Y;
    scanf("%d", &Y);

    int *tempData = realloc(data, Y * Y * sizeof(int));
    if (!tempData) {
        printf("Gagal relokasi memory\n");
        free(mat);
        free(data);
        return 1;
    }
    data = tempData;

    int **tempMat = realloc(mat, Y * sizeof(int*));
    if (!tempMat) {
        printf("Gagal relokasi memory\n");
        free(mat);     
        free(data);
        return 1;
    }
    mat = tempMat;

    for (int i = 0; i < Y; i++)
        mat[i] = data + i * Y;

    for (int i = 0; i < Y; i++) {
        for (int j = 0; j < Y; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    for (int i = 0; i < Y; i++) {
        for (int j = 0; j < Y; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    free(mat);
    free(data);

    return 0;
}
