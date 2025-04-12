#include <stdio.h>
#include <string.h> 

int main() {
    char str[100];
    fgets(str, sizeof(str), stdin);
    int len;
    for(int i=0;str[i]!=0;i++){
        len++;
    }  
    for(int j=len;str[j]!=0;j--){
        str[len-j]=str[j];
    }
    printf("%s",str);
    }