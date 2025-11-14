#include <stdio.h>

int main() {
    int arr[6][6];

    for(int i = 0; i < 6; i++) {
        for(int j = 0; j < 6; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    int sum[16];
    int k = 0;
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++) {
            sum[k] = arr[i][j] + arr[i][j + 1] + arr[i][j + 2] + arr[i + 1][j + 1] + arr[i + 2][j] + arr[i + 2][j + 1] + arr[i + 2][j + 2];
            k++;
        }
    }

    int max = -63; // make sure to set the lowest value possible
    for(int i = 0; i < 16; i++) {
        max = (sum[i] > max) ? sum[i] : max;
    }

    // for(int i = 0; i < 16; i++) {
    //     printf("%d", sum[i]);
    // }

    printf("%d", max);

    return 0;
}