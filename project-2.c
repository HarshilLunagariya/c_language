
#include<stdio.h>

int main(){
    int score;
    char grade;

    printf("enter your score:");
    scanf("%d",&score);

    grade=(score>=90)?'a':
          (score>=80)?'b':
          (score>=70)?'c':
          (score>=60)?'d':'F';

    printf("your grade is %c\n",grade);

    switch (grade)
    {
    case 'a':
        printf("excellent work!\n");
        break;

    case 'b':
        printf("Well done\n");
        break;

    case 'c':
        printf("good job\n");
        break;

    case 'd':
        printf("you passed\n");
        break;

    case 'f':
        printf("sorry,you failed\n");
        break;
    }

    if (grade=='a'||grade=='b'||grade=='c'||grade=='d')
    {
        printf("Congratulations! You are eligible for the next level.\n");
    }else if (grade=='F')
    {
        printf("Please try again next time.");
    }
    
    return 0;

}