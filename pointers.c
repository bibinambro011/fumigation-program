#include<stdio.h>
#include<string.h>
void main(){
    int a=10;
    int *p=&a;
    int **q=&p;
    int ***r=&q;

    printf("a = %d \n",**q);
    printf("a = %d\n",***r);
    printf("address of q = %X %X",&p,q);

}