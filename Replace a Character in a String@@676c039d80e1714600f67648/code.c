#include <stdio.h>

int main() {
    char str[1000];
    char findChar, replaceChar;
    scanf("%s",str);
    scanf("%c",findChar);
    scanf("%c",replaceChar);
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == findChar) {
            str[i] = replaceChar;
        }
    }
    printf("%s", str);
    return 0;
}
