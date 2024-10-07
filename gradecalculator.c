#include <stdio.h>

int main(){

    int marks;

    printf("enter marks out of 100:");
    scanf("%d",&marks);

    if (marks >= 100)
    {
        printf("invalid marks");
    }
    else if (marks >=80)
    {
        printf("your grade is a");
    }
    else if (marks >= 70)
    {
        printf("your grade is b ");
    }
    else if (marks >= 60)
    {
        printf("your grade is c");
    }
    else if (marks >=45)
    {
        printf("your grade is d");
    }
    else if (marks >=33)
    {
        printf("your grade is e");
    }
    else{
        printf("you have not cleared exam");
    }
    
}