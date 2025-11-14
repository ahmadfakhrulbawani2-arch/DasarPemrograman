#include <stdio.h>
#include <string.h>

int main() {
    char str[1500];
    int abj[26] = {0};

    fgets(str, sizeof(str), stdin);

    for(int i = 0; i < strlen(str); i++) {
        if(str[i] >= 'a' && str[i] <= 'z') {
            abj[str[i] - 'a'] = 1;
        }
    }

    int count = 0;
    for(int i = 0; i < 26; i++) {
        count += abj[i];
    }

    printf("%d", count);
    return 0;
}