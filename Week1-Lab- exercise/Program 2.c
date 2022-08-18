#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main()
{
    int state=0,i=0;
    char token,input[20];
    printf("Enter input string \t :");
    scanf("%s",input);
    int l=strlen(input);
    //printf("Given string is : %s");
    printf("%c",input[l]);

    if(input[l-1]==input[l-2])
    printf("String accepted");
    else
    printf("String Not accepted");
    
}
