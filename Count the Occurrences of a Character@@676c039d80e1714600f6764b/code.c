#include <stdio.h>
#include <string.h> 
int main() {
    char str[100];
    scanf("%s",str\n);
    int count;
    char c;
    scanf("%c",&c);
    for(int i=0;str[i]!='\0';i++){
        if(str[i]==c){
            count++;
        }
    }
    printf("%d",count);
    return 0;
    }