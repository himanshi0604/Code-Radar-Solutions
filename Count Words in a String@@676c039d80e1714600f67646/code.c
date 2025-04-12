#include<stdio.h> 
#include<string.h> 
int main(){
char str[100];
scanf("%s",str);
int count;
for(int i=0;str[i]!=\0;i++){
    count++;
    printf("%d",count);
}
  return 0;
}