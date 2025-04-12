#include <stdio.h>
#include<string.h>
int main() {
    char str[100];
    int count = 1;  // Start from 1 assuming at least one word

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') {
            count++;
        }
    }

    printf("Number of words: %d\n", count);
    return 0;
}
