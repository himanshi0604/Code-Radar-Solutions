#include <stdio.h>
#include <string.h> 

int main() {
    char str[100];
    fgets(str);
    int len;
    for(int i=0;str[i]!=0;i++){
        len++;
    }  
    for(int j=0;str[j]!=0;j++){
        str[len-i]=str[i];
    }
    printf("%c",str);
    }