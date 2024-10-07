// quetion 1 
#include <stdio.h>

main(){

    char alpha = 'a';


    do
    {
        printf("%c\n",alpha);
        alpha+=4;
    } while (alpha<='z');
    return 0;

}


// question 2
#include <stdio.h>

main(){

int num;
int count = 0;

printf("enter the number:");
scanf("%d",&num);

do
{
    num = num / 10;
    count++;
} while (num !=0);

printf("number of digits is %d",count);
}


// quetion 3
#include <stdio.h>

main()
{
    int num , sum = 0 , firstdigit , lastdigit;
    printf("enter the number:");
    scanf("%d",&num);

    lastdigit = num % 10;

    firstdigit = num;

    while(num >= 10){
        num = num / 10;
    }     
    firstdigit =  num;

    sum = firstdigit + lastdigit;

    printf("sum of a first digit and last digit:%d",sum);
}