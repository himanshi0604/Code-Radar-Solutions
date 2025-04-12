#include <stdio.h>

int main() {
    char str[1000];
    char findChar, replaceChar;

    scanf("%s", str);                  // Reads string until space or newline
    scanf(" %c", &findChar);          // Space before %c to ignore leftover newline
    scanf(" %c", &replaceChar);

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == findChar) {
            str[i] = replaceChar;
        }
    }

    printf("%s", str);
    return 0;
}
