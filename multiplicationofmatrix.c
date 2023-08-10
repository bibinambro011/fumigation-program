#include<stdio.h>

void main(){
    int a[3][3],result[3][3], b[3][3],i,j,c,d;
    printf("enter row number of first array\n ");
    scanf("%d",&c);
    printf("enter column nunmber\n");
    scanf("%d",&d);

    for(i=0;i<c;i++){
        for(j=0;j<d;j++){
            scanf("%d",&a[i][j]);
        }
    }

    printf("second matrix \n");

    for(i=0;i<c;i++){
        for(j=0;j<d;j++){
            scanf("%d",&b[i][j]);
        }
    }

    printf("printing values \n");

    for(i=0;i<c;i++){
        for(j=0;j<d;j++){
            printf("%d \t",a[i][j]);
        }
        printf("\n");
    }

     for(i=0;i<c;i++){
        for(j=0;j<d;j++){
            printf("%d \t",b[i][j]);
        }
        printf("\n");
    }

    printf("doing multiplication \n");
    for(i=0;i<c;i++){
        for(j=0;j<d;j++){
        printf("%d",a[i][j]*b[j][i]);
        int k=a[i][j]*b[j][i];
        result[i][j]=k;
    }
    printf("\n");
    }





    for(i=0;i<c;i++){
        for(j=0;j<d;j++){
            printf("%d \t",result[i][j]);
        }
        printf("\n");
    }

}