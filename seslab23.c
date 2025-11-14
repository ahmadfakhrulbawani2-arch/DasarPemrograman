#include <stdio.h>
#include <math.h>

int main() {
    int a = 0;
    scanf("%d", &a);

    for(int i = 2; i <= a; i++) {
        if(i == 2 || i == 3) {
            printf("* ");
            continue;
        }
        int rooti = sqrt(i);
        int cek = 0;
        for(int j = 2; j <= rooti; j++) {
            if(i % j == 0) {
                cek = 1;
                break;
            } else {
                cek = 0;
            }
        }
        if(cek == 1) {
            printf("%d ", i);
        } else {
            printf("* ");
        }
        cek = 0;
    }
    return 0;
}