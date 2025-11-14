#include <string.h>
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    char str[n + 1];

    getchar(); //  get rid of \n after scanf;
    fgets(str, sizeof(str), stdin);

    int countCap = 0, max = 0, len = strlen(str);
    for(int i = 0; i < len; i++) {
        if(str[i] == ' ') {
            max = (countCap > max) ? countCap : max;
            countCap = 0;
        } else if(str[i] >= 'A' && str[i] <= 'Z') {
            countCap += 1;
        }
    }

    max = (countCap > max) ? countCap : max;
    countCap = 0;

    printf("%d", max);
    return 0;
}