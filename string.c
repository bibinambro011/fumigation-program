#include<stdio.h>
#include<string.h>
void main(){
    char name[30],name2[30];
    int len1,len2,i;
    printf("enter your name\n");
    // scanf("%s",name);
    gets(name);
    printf("enter second name \n");
    gets(name2);

    len1=strlen(name);
    len2=strlen(name2);

    // printf(name);
    // printf("%.5s\n",name);
    // printf("%10.5s\n",name);
    // puts(name);
    // puts(name);
    
    //  printf("%5s\n",name);

// while(name[i] !='\0'){
//     count+=1;
//     i++;

// }
// printf("the length of the string is %d",count);
for(i=0;i<=len2;i++){
    name[len1+i]=name2[i];
}

printf("printingbthe values \n");

for(i=0;i<len1+len2;i++){
    printf("%c",name[i]);
}
puts(name);



}