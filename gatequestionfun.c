#include<stdio.h>

int jumble(int x,int y){
   x=2*x+y;
   return x;
}

int main(){
    int x=5,y=10;
    y=jumble(y,x);
    x=jumble(y,x);
    printf("the calculated value is : %d",x);
}