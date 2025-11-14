#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char s[201];
    scanf("%200s", s);

    char camel[201];
    int i = 0, j = 0;
    int isFirstWord = 1;
    int afterUnderscore = 0;

    while (s[i]) {
        if (s[i] == '_') {
            afterUnderscore = 1;
        } else {
            if (isFirstWord) {
                camel[j++] = tolower(s[i]);
            } else if (afterUnderscore) {
                camel[j++] = toupper(s[i]);
                afterUnderscore = 0;
            } else {
                camel[j++] = tolower(s[i]);
            }
            isFirstWord = 0;
        }
        i++;
    }
    camel[j] = '\0';

    printf("%s\n", camel);
    return 0;
}
