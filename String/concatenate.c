#include<stdio.h>
#include<string.h>
int main(){
    char s1[30]="Aniket";
    char s2[20]="Gupta";
    strcat(s1,s2);//It concatenate whole sting.
    strncat(s1,s2,4);//It concatenate the number of character we provide.
    printf("%s\t",s1);
    return 0;

}