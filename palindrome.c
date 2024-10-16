#include <stdio.h>

void main(){

    char str[100];

    printf("enter any string :");
    
    gets(str);

    int length=0;
    int i=0;

    while (str[i]!= '\0')
    {
        length++;
        i++;
    }

    int left=0;
    int right= length-1;
    int count;
    
    while (left < right)
    {
        if (str[left] != str[right])
        {
            count++;
        }
        left++;
        right--;
    }
    
    if (count>0)
    {
        printf("string is palindrome");
    }
    else{
        printf("string is not palindrome");
    }

    

}