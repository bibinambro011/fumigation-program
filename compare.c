#include<stdio.h>
#include<string.h>
void main(){
    char name[30],name1[30];
    int i;

    printf("enter first name \n");
    gets(name);
    printf("enter second name \n");
    gets(name1);

for(i=0; name[i]!='\0' || name1[i] !='\0';i++){
    if(name[i]!=name1[i]){
        printf("the two strings are not same");
        break;
    }
    else{
        printf("same");
        
    }
   
}



}