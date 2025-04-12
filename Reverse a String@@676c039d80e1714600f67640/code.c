#include <stdio.h>
int main() {
    char str[100];
    int i = 0, len = 0;
    scanf("%s", str);  // still no spaces allowed

    // Manually calculate the length of the string
    while (str[len] != '\0') {
        len++;
    }

    for (i = len - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }

    return 0;
}
