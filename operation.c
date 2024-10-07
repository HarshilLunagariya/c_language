#include <stdio.h>

main(){

    int a,b,sum,sub,mul,div,mod;
    a=12;
    b=6;
    sum=a+b;
    printf("addition of a and b is %d",sum);
    sub=a-b;
    printf("\nsubstraction of a and b is %d",sub);
    mul=a*b;
    printf("\nmultiplication of a and b is %d",mul);
    div=a/b;
    printf("\ndivison of a and b is %d",div);
    mod=a%b;
    printf("\nmodule of a and b is %d\n",mod);

    printf("\n---------");
    printf("\n|       |");
    printf("\n|5x5= 25|");
    printf("\n|       |");
    printf("\n---------");
}