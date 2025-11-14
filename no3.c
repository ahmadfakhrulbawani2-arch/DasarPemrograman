#include <stdio.h>

void revers(int arr[], int n);

int main(void) {
    int n;
    scanf("%d", &n);
    int arr[n];

    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    reverse(arr, n);
    return 0;
}

void reverse(int arr[], int n) {
    // for(int i = n-1; i >= 0; i--) {
    //     printf("%d ", arr[i]);
    // } terlalu eeezzzzz

    int i = 0, j = n-1;
    for(i; i <= j; i++) {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        j--;
    }

    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
}