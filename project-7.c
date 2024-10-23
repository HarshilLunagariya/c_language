#include <stdio.h>
#define row 2
#define col 2

int cubes(int(*arr)[col] , int (*cube)[col]){
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cube[i][j] = arr[i][j] * arr[i][j] * arr[i][j]; 
        }
    }
}

int main(){
    // que - 1
    char str[100];
    int length;

    printf("enter the string:");
    fgets(str, sizeof(str), stdin);

    length = stringlength(str);
    printf("the length of the string is: %d\n", length);

    // que - 2
    int arr[row][col];
    int cube[row][col];

    // print the array
    printf("enter the row and col:%d%d",row,col);
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            printf("\n[%d][%d]=",i,j);
            scanf("%d",&arr[i][j]);
        }
    }

    // calculate the cube
    cubes(arr, cube);
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    //print the cube element 
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            printf("%d ",cube[i][j]);
        }
        printf("\n");
    }
    return 0;
}