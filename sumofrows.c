#include<stdio.h>

void main(){
    int a[3][3],i,j,b,c,sum=0;
    printf("enter the number of values to store row in array\n");
    scanf("%d",&b);
    printf("enter number of values to stored as columns\n");
    scanf("%d",&c);
    printf("please enter the values\n");
    for(i=0;i<b;i++){
        for(j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("printing the values\n");
    for(i=0;i<b;i++){
        for(j=0;j<c;j++){
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("the sum of the row is\n");
    for( i=0;i<b;i++ ){
        for(j=0;j<c;j++){
            sum+=a[i][j];
        }
        printf("the sum of the %d row is %d \n",i,sum);
        sum=0;
    }
}