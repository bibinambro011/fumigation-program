#include<stdio.h>

void main(){
    // int n=5,i,j,p=1;
    // for(i=1;i<=n;i++){
    //     for(j=1;j<i;j++ ){
    //         printf(" ");
    //     }
    //     for(int k=i;k<=n;k++){
    //         printf("%d ",p*i);
    //         p++;
    //     }
    
    //     printf("\n");
    // }

//     for(int i=1;i<=5;i++){
//         int k=i;
//         for(int j=1;j<=6-i;j++){
//             if(j<i){
//                 printf(" ");
//             }else{
//                  printf("%d ",k);
//                 k+=i;
//             }
           
            
//         }
//         printf("\n");
//     }
// }

// int n=5,p=1,k,i,j;
// for(i=n;i>=1;i--){
//     for(j=i;j<n;j++){
//         printf(" ");
//     }
//     for(k=1;k<=i;k++){
//         printf("%d ",p*k);
//     }
//     p++;
//     printf("\n");
// }


// int arr1[100]={1,3,3,3,3,1,1,9,10},size=9;

// for(int i=0;i<size;i++){
   
//     if(arr1[i]%2==0){
//         i+=3;
        
//     }
//     printf("\n");
//      if(i<size){
//     printf("%d ",arr1[i]);
//      }
// }
// for (int j=0;j<size;j++){
//     printf("%d ",arr1[j]);
// }

//__________________________________________
// int count=0;
// for(int i=0;i<size;i++){
//     for(int j=0;j<size;j++){
//         if(arr1[i]==arr1[j] && i<j){
//             count++;
//             break;
//         }
//     }
// }
// printf("%d ",count);

//_____________________________
int k=0;
for(int i=1;i<=9;i++){
    if(i<=5){
        k++;
    }else{
        k--;
    }
    for(int j=1;j<=10;j++){
        if(j>=k &&j<=6-1 || j<= 4+k ){
            printf("* ");
        }else{
            printf(" ");
        }
    }
    printf("\n");
}
}