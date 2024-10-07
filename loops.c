// quetion 1
#include <stdio.h>

int main(){

    int i=1;
    
    while (i<=10)
    {
        printf("%d\n",i);
        
        i++;
    }
    
}


// question 2
#include <stdio.h>

int main(){

    int i=10;

    while (i>=1)
    {
        printf("%d\n",i);
        
        i--;
    }
    
}


// quetion 3
#include <stdio.h>

int main(){
    
      int i,min=1;
    
    printf("enter the number:");
    scanf("%d",&i);
    
    while (min<=i){
        
        printf("%d\n",min);
        min++;
        
    }
}


//  question 4
#include <stdio.h>

main(){

    int i;

    printf("enter the number:");
    scanf("%d",&i);

    while(i>=1){

        if(i%2!=0){

            printf("%d\n",i);
        }
        i--;
    }
}


// quetion 5
#include <stdio.h>

main(){

    int a,b;

    printf("enter the first year:");
    scanf("%d",&a);
    printf("enter second year:");
    scanf("%d",&b);

    while (a<=b)
    {
        if((a %4 ==0 && a%100 !=0 ) || (a %400 ==0))

        printf("%d\n",a);
    }
    a++;

}


