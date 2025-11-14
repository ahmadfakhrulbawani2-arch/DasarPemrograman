#include <stdio.h>
#include <string.h>

int main() {
    char str[105];
    getchar();
    fgets(str, 100, stdin);

    int as = 0, es = 0, us = 0, is = 0, os = 0;
    for(int i = 0; i < strlen(str); i++) {
        if(str[i] == 'a' || str[i] == 'A') {
            as += 1;
        } else if(str[i] == 'i' || str[i] == 'I') {
            is += 1;
        } else if(str[i] == 'u' || str[i] == 'U') {
            us += 1;
        } else if(str[i] == 'e' || str[i] == 'E') {
            es += 1;
        } else if(str[i] == 'o' || str[i] == 'O') {
            os += 1;
        }
    }

    printf("A/a : %d\nI/i : %d\nU/u : %d\nE/e : %d\nO/o : %d\n", as, is, us, es, os);
    return 0;
}