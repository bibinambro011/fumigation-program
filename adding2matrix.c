#include<stdio.h>

void main(){
    // int a[2][3],result[2][3], b[2][3],i,j,c,d;
    // printf("enter row number of first array\n ");
    // scanf("%d",&c);
    // printf("enter column nunmber\n");
    // scanf("%d",&d);

    // for(i=0;i<c;i++){
    //     for(j=0;j<d;j++){
    //         scanf("%d",&a[i][j]);
    //     }
    // }

    // printf("printing the values \n");
    // for(i=0;i<c;i++){
    //     for(j=0;j<d;j++){
    //         printf("%d",a[i][j]);
    //     }
    //     printf("\n");
    // }

    // printf("for printing second matrix \n");

    //  for(i=0;i<c;i++){
    //     for(j=0;j<d;j++){
    //         scanf("%d",&b[i][j]);
    //     }
    // }

    //  printf("printing the values \n");
    // for(i=0;i<c;i++){
    //     for(j=0;j<d;j++){
    //         printf("%d",b[i][j]);
    //     }
    //     printf("\n");
    // }

    // printf("adding the values in two matrix\n");

    // for(i=0;i<c;i++){
    //     for(j=0;j<d;j++){
    //         printf("%d \t",a[i][j]+b[i][j]);
    //         int k=a[i][j]+b[i][j];
    //        result[i][j]=k;
    //     }
    //     printf("\n");
    // }

    // printf("printing the values in the array of result \n");

    // for(i=0;i<c;i++){
    //     for(j=0;j<d;j++){
    //         printf("%d \t",result[i][j]);
    //     }
    //     printf("\n");
    // }


//____________________________________
    int arr1[]={3,3,4,5,67,8,9,11,12,14},size=10;

 for(int i=0;i<size;i++){
    if(arr1[i]%2==1){
        for(int j=i;j<size;j++){
            arr1[j+1]=arr1[j+3];
            arr1[j+2]=arr1[j+3];
        }
        size-=2;
    }
    
 }
 for(int i=0;i<size;i++){
    printf("%d ",arr1[i]);
 }



}