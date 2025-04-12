#include <stdio.h>

int main() {
    char str[100];
    int count = 0, i = 0;

    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0') {
        // if current char is not a space and next char is space or newline
        if ((str[i] != ' ' && str[i] != '\n') && 
            (str[i + 1] == ' ' || str[i + 1] == '\n' || str[i + 1] == '\0')) {
            count++;
        }
        i++;
    }

    printf("%d", count);
    return 0;
}
