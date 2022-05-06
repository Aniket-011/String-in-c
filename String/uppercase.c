#include<stdio.h>
#include<string.h>
int main (){
    char s1[30]="Aniket Gupta";
    for (int i = 0; s1[i]!='\0'; i++)
    {
        if (s1[i]>='A' && s1[i]<='Z' )
        {
            s1[i]=s1[i]+32;
        }
        
    }
    printf("%s",s1);
    return 0;
    

}