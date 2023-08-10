#include<stdio.h>

// int incre(int i){
//     static int count=0;
//     count=count+i;
//     return (count);
// }
// int main(){
//     int j;
//     for(int i=0;i<=4;i++){
//         j=incre(i);
//     }
//     printf("J value is : %d",j);

//     return 0;
// }

void f(int *p ,int m){
    m=m+5;
    *p=*p+m;
    return;
}
void main(){
    int i=5,j=10;
    f(&i,j);
    printf("%d",i+j);
}