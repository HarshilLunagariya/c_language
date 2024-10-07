#include <stdio.h>

int main() {
    int a[5][4] = {
        {7, 4, 1, 7},
        {5, 2, 0, 1},
        {4, 0, 6, 6},
        {8, 6, 8, 4},
        {4, 9, 6, 4}
    };
    
    int sum = 0; 
    for (int i = 0; i < 5; i++) { 
        for (int j = 0; j < 4; j++) { 
            sum += a[i][j]; 
        }
    }
    
    printf("%d\n", sum);
    return 0; 
}

// sum
#include<stdio.h>

int main(){
    
    int row,column,i,j,sum;
    
    printf("enter the size of row:");
    scanf("%d",&row);
    printf("entr the size of column:");
    scanf("%d",&column);
    
    int a[row][column];
    
   
    for(i=0; i<row; i++){
        
         for(j=0; j<column; j++){
                 printf("enter the elements:");
                scanf("%d",&a[i][j]);
                
                sum += a[i][j];
             }
    }
    printf("sum of all elements is %d",sum);
}