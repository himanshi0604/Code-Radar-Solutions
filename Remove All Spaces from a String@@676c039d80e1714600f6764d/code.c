#include <stdio.h>

int main() {
    char str[40];
    fgets(str, sizeof(str), stdin);
    int len;
    int i=0;
    while(str[i]!=0){
        len++;
    }
    for(int k=len;i>=0;i--){
        if(str[k]=' '){
            str[k-1]=str[k];
        }
    }

    }
    
