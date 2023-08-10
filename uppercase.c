#include<stdio.h>
#include<string.h>
void main(){
    char name[30];
    int i;
    printf("enter the string\n");
    gets(name);

    for(i=0;name[i]!='\0';i++){
        if(name[i]>='A' && name[i]<='Z'){
            name[i]=name[i]+32;
        }
    }
    printf("%s \t",name);

}
