#include<stdio.h>
#include<string.h>
int main(){
    
    char len[30]; // Here length is must be greater than actual length of string.
    int i=0,count=0;
    printf("Enter string \n");
    gets(len);
    puts(len);
    while(len[i]!='\0')
    {
        count++;
        i++;
    }
    printf("Length of string is %d",count);
    return 0;
    

}

