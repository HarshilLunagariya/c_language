#include <stdio.h>
#include <conio.h>

int sum(){
    int a , b, sum=0;
    printf("enter the a value:");
    scanf("%d",&a);
    printf("enter the b value:");
    scanf("%d",&b);
    sum = a + b;
    printf("sum of :%d\n",sum);
    return sum;
}

int sub(){
    int a , b, sub=0;
    printf("enter the a value:");
    scanf("%d",&a);
    printf("enter the b value:");
    scanf("%d",&b);
    sub = a - b;
    printf("sub of :%d\n",sub);
    return sub;
}

int mul(){
    int a , b, mul=0;
    printf("enter the a value:");
    scanf("%d",&a);
    printf("enter the b value:");
    scanf("%d",&b);
    mul = a * b;
    printf("mul of :%d\n",mul);
    return mul;
}

int div(){
    int a , b, div=0;
    printf("enter the a value:");
    scanf("%d",&a);
    printf("enter the b value:");
    scanf("%d",&b);
    div = a / b;
    printf("div of :%d\n",div);
    return div;
}

int mod(){
    int a , b, mod=0;
    printf("enter the a value:");
    scanf("%d",&a);
    printf("enter the b value:");
    scanf("%d",&b);
    mod = a % b;
    printf("mod of :%d\n",mod);
    return mod;
}

void main(){
    int cal;
    for(int i=1; i<6; i++){
    printf("\nenter your choice:\n");
    printf("1.(1) for sum\n");
    printf("2.(2) for sub\n");
    printf("3.(3) for mul\n");
    printf("2.(4) for div\n");
    printf("3.(5) for mod\n");
    scanf("%d",&cal);
        switch(cal){
            case 1:
                sum();
                break;
            case 2:
                sub();
                break;
            case 3:
                mul();
                break;
            case 4:
                div();
                break;
            case 5:
                mod();
                break;
            default: 
                printf("invalid input!!");
                break;
        }
    }
}