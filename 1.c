// 1. Write a function to calculate length of the string
#include<stdio.h>
#include<string.h>
int main()
{
    char str[50];
    printf("Enter a string: ");
    fgets(str,50,stdin);
    str[strcspn(str,"\n")]='\0';

    printf("The lenth of the string = %d",string_length(str));

    return 0;
}
int string_length(char strg[])
{
    int i;
    for (i = 0; i < strg[i]; i++);
    return i;
}
    