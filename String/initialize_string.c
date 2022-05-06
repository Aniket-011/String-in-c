#include<stdio.h>
int main(){
    char name[2];
    printf("Enter string \n");
    gets(name);
    printf("%s \n",name);
    printf("%.5s \n",name);
    puts(name);
    printf("%s",&name[2]);

    return 0;
  

}