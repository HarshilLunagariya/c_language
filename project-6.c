#include <stdio.h>
#include <conio.h>

void main(){
    // char str[20];
    // int i, length = 0, ispalindrom = 1;

    // printf("enter the string:");
    // // scanf("%s",&str);
    // fgets(str, sizeof
    // .
    // (str), stdin);

    // for(i=0; str[i] != '\0'; i++){
    //     if(str[i] == '\n'){
    //         str[i] = '\0';
    //     }
    //     length++;
    // }
    // for(i=0; i<length/2; i++){
    //     if(str[i] != str[length - i -2]){
    //         ispalindrom = 0;
    //         break;
    //     }
    // }
    // if(ispalindrom){
    //     printf("this given string is a palindrome.\n");
    // }
    // else{
    //     printf("this given string is a not palindrome.\n");
    // }

    char str[30];
    int frequency[256] = {0};
    int i;

    printf("enter the string:");
    fgets(str, sizeof(str), stdin);

    // calculate frquency of each charater
    for(i=0; str[i] != '\0'; i++){
        if(str[i] != '\n'){
            frequency[(unsigned char)str[i]]++;
        }
    }
    printf("frequency of each letter:\n");
    for(i=0; i<256; i++){
        if(frequency[i]>0){
            printf("%c => %d\n",i,frequency[i]);
        }
    }
}