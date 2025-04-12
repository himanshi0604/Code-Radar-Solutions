#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    int count = 0;
    scanf("%s", str);
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[] == 'a' || str[] == 'e' || str[] == 'i' || str[] == 'o' || str[] == 'u'||str[] == 'A' || str[] == 'E' || str[] == 'I' || str[] == 'O' || str[] == 'U') {
            count++;
        }
    }
    printf("%d\n", count);
    return 0;
}