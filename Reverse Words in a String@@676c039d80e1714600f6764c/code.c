#include<stdio.h> 
#include<string.h> 
int main(){
    char str[40];
    puts("enter a str");
    fgets(str);
    puts("the reverse is ");   //automatically \n bhi de deta ha
    //size kitna ha ? 
    int size = 0;
    int i = 0;
    while(str[i]!='\0'){
        size++;
        i++;  
    } 
    //printf("%d",size);
    for(int k=0,j=size-1;i<=j;i++,j--){
        char temp = str[j];
        str[i] = str[j];
        str[j] = temp;
    }
    puts(str);
    return 0;
}