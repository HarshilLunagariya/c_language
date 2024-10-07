#include <stdio.h>
#include <conio.h>

void main(){
    // que-1
    int m,i;
    printf("enter the array's size:");
    scanf("%d",&m);
    int arr[m];
    for(i=0; i<m; i++){
        printf("arr[%d]=",i);
        scanf("%d",&arr[i]);
    }
    for(i=0; i<m; i++){
        if(arr[i]<=0){
            printf("%d",arr[i]);
        }
    }
    
    // que-2
    // int m,n;
    // printf("enter the row:");
    // scanf("%d",&m);
    // printf("enter the column:");
    // scanf("%d",&n);
    // int arr[m][n];
    // for(int i=0; i<m; i++){
    //     for(int j=0; j<n; j++){
    //         printf("arr[%d][%d]",i,j);
    //         scanf("%d",&arr[i][j]);
    //     }
    // }
    // int max = arr[0][0];
    // int min = arr[0][0];
    // for(int i=0; i<m; i++){
    //     for(int j=0; j<n; j++){
    //         if(arr[i][j] > max){
    //             max = arr[i][j];
    //         }
    //     }
    // }
    // printf("the maximum number of array:%d",max);

    // que-3
    // int m,n,i,j;
    // printf("enter the row&col size:");
    // scanf("%d%d",&m,&n);
    // int arr[m][n],tras[m][n];
    // for(i=0; i<m; i++){
    //     for(j=0; j<n; j++){
    //         printf("arr[%d][%d]=",i,j);
    //         scanf("%d",&arr[i][j]);
    //     }
    // }
    // for(i=0; i<m; i++){
    //     for(j=0; j<n; j++){
    //         tras[i][j] = arr[i][j];
    //     }
    // }
    // printf("print the trasnpose array matrix:\n");
    // for(i=0; i<m; i++){
    //     for(j=0; j<n; j++){
    //         printf("%d ",tras[i][j]);
    //     }
    //     printf("\n");
    // }

    // que-4
    // int m,n,m_num,n_num,m_sum=0,n_sum=0;
    // printf("enter the row size:");
    // scanf("%d",&m);
    // printf("enter the column size:");
    // scanf("%d",&n);
    // int arr[m][n];
    // printf("enter the array element:\n");
    // for(int i=0; i<m; i++){
    //     for(int j=0; j<n; j++){
    //         printf("arr[%d][%d]=",i,j);
    //         scanf("%d",&arr[i][j]);
    //     }
    // }
    // // get row and column form the user
    // printf("enter row number:");
    // scanf("%d",&m_num);
    // printf("enter column number:");
    // scanf("%d",&n_num);
    // // print the element of specified row and calculated the sum
    // printf("print the element of row:%d",m_num);
    // for(int j=0; j<n; j++){
    //     printf("%d ",arr[m_num][j]);
    //     m_sum += arr[m_num][j];
    // }
    // printf("\n");
    // printf("the sum of row %d:%d\n",m_num,m_sum);
    // // print the element of specified column and calculated the sum
    // printf("print the element of column:%d",n_num);
    // for(int i=0; i<m; i++){
    //     printf("%d ",arr[i][n_num]);
    //     n_sum += arr[i][n_num];
    // }
    // printf("\n");
    // printf("the sum of column%d:%d"n_num,n_sum);
}
