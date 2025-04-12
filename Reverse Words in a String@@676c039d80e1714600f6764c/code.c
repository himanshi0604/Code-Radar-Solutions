#include<stdio.h> 
#include<string.h> 
int main() {
    char str[40];
    fgets(str, sizeof(str), stdin);
    int size = 0;
    int i = 0;
    while (str[i] != '\0') {
        size++;
        i++;
    }
    for (int k=size-1;k<=0;k--) {
        printf("%s",str[k])
    }
    return 0;
}