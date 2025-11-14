#include <stdio.h>

int main() {
    int a = 0;
    scanf("%d", &a);
    if(a % 2 == 0) {
        printf("Genap\n");
    } else {
        printf("Ganjil\n");
    }
}