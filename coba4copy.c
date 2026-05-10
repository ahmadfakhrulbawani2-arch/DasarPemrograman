#include <stdio.h>
#include <stdlib.h>

int main() {
    int X;
    scanf("%d", &X);

    int *data = malloc(X * X * sizeof(int));
    int **mat = malloc(X * sizeof(int*));

    for (int i = 0; i < X; i++) mat[i] = data + i * X;

    for (int i = 0; i < X; i++) {
        for (int j = 0; j < X; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    int Y;
    scanf("%d", &Y);

    int *newData = malloc(Y * Y * sizeof(int));
    int **newMat = malloc(Y * sizeof(int*));

    for (int i = 0; i < Y; i++) newMat[i] = newData + i * Y;

    for (int i = 0; i < X; i++) {
        for (int j = 0; j < X; j++) {
            newMat[i][j] = mat[i][j];
        }
    }

    for (int i = X; i < Y; i++) {
        for (int j = 0; j < Y; j++) {
            newMat[i][j] = 0;
        }
    }

    for (int i = 0; i < X; i++) {
        for (int j = X; j < Y; j++) {
            newMat[i][j] = 0;
        }
    }

    free(mat);
    free(data);

    mat = newMat;
    data = newData;

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
