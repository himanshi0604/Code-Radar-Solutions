#include<stdio.h>
#include<string.h>
int main(){
char str[4];
scanf("%[^\n]s",str);
for(int i=4;i>=0;i--){
    str[4-i] = str[i];
    puts(str);
    return 0;
}
}