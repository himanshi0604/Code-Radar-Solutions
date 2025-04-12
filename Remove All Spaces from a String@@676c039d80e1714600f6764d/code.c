#include <stdio.h>

int main() {
    char str[40];
    fgets(str, sizeof(str), stdin);
    int i = 0, j = 0;
    while (str[i] != '\0') {
        if (str[i] == ' ') {
            str[i+1] = str[i]; 
        }
        i++;
    }
    printf("%s", str);
    
    return 0;
}
