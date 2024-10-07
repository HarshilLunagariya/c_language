// quetion 1
#include <stdio.h>

int main(){

    float x,y,sum;

    printf("enter the value of x:");
    scanf("%f",&x);
    printf("enter the value of y:");
    scanf("%f",&y);
    sum=(x*x)+(2*x*y)+(y*y);
    printf("your answer is= %f",sum);
}


// quetion 2
#include <stdio.h>
int main(){

    float x,y,sum;

    printf("enter the value of x:");
    scanf("%f",&x);
    printf("enter the value of y:");
    scanf("%f",&y);
    sum=(x*x)-(2*x*y)+(y*y);
    printf("your answer is= %f",sum);
}


// quetion 3
#include <stdio.h>
int main(){

    float x,y,sum;

    printf("enter the value of x:");
    scanf("%f",&x);
    printf("enter the value of y:");
    scanf("%f",&y);
    sum=(x+y)*(x+y)*(x+y);
    printf("your answer is= %f",sum);
}


// quetion 4
#include <stdio.h>
int main(){

    int x=10;
    int y=20;
    int z;

    printf("x= %d ,y= %d ",x,y);

    x = x+y; 
    // 30
    y= x-y;
    // 30-20=10
    x= x-y;
    // 30-10=20
    
    printf("x= %d , y= %d",x,y);

}


// 