// question 3
#include <stdio.h>
int main()
{
    int i, j, k;

    for (i = 5; i >= 1; i--)
    {
        
        for (j = 1; j < i; j++)
        {
           printf(" ");
        }
        for (k = i; k <= 5; k++)
        {
             printf("%d", j);
        }
        printf("\n");
    }
}


// question 1
#include <stdio.h>

main(){
    
    for(int i=1;i<=5;i++){
        
        for(int j=5;j>i;j--){
            
            printf(" ");
        }
        for(int k=1;k<=i;k++){
            
            printf("%d",k);
        }
        printf("\n");
    }
}