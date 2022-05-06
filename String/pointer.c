#include<stdio.h>
int main (){
    int a[]={1,2,3,4};
    int *p=a;//Here p is pointe b/c it is assign with int * which storeaddress of a.
    printf("%u\n",*p);
    printf("%u\n",p);
    printf("%u\n",p++);//Here first print p means address of a and than p is incremented by 1(4 bit)  
    printf("%u\n",*p);//In upper step value of p incremented therefore we get new value of p here.



}