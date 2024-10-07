// 1 temprature
  #include <stdio.h>
void main(){
    int c;
    printf("enter celcius:-");
    scanf("%d",&c);
    float f ;
    f = (9.0/5.0);
    f=f*c+32;
    printf("%d into fehrenhit is :- %f",c,f);
}

// 2 gross salary
#include <stdio.h>
void main()
{
    int s, hra, da, ta;
    printf("enter s:-");
    scanf("%d", &s);
    printf("enter hra:-");
    scanf("%d", &hra);
    printf("enter da:-");
    scanf("%d", &da);
    printf("enter ta:-");
    scanf("%d", &ta);

    float ans,h,d,t;
    h = (s*hra)/100;
    d = (s*da)/100;
    t = (s*ta)/100;
    ans = s+d+t+h;
    printf("%f",ans);
}

// 3 triangle angle
#include<stdio.h>
void main(){
    int a , b , c;
    printf("enter angle-11:-");
    scanf("%d",&a);
    printf("enter angle-2:-");
    scanf("%d",&b);
    c = 180 - (a+b);
    printf("third angle is :- %d",c);
}