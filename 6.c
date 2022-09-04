/* 6. Write a function to check whether a given string is an alphanumeric string or not. (Alphanumeric string must contain at least one alphabet and one digit)
*/

#include<stdio.h>
#include<string.h>
int main()
{
    char str[50];
    printf("Enter a string: ");
    fgets(str,50,stdin);
    str[strcspn(str,"\n")]='\0';
    
    int var=isAlphanumeric_string(str);
    if(var==1)
        printf("Alphanumeric");
    else 
        printf("Not alphanumeric");    

    return 0;
}
int isAlphanumeric_string(char strg[])
{
    int i,count_alphabet=0,count_digit=0;
    for ( i = 0; strg[i]; i++)
    {
        if(strg[i]>=48 && strg[i]<=57)
            count_digit++;
        if((strg[i]>=65 && strg[i]<=90) || (strg[i]>=97 && strg[i]<=122))
            count_alphabet++;
    }
    if(count_alphabet>0 && count_digit>0)
        return 1;
    else
        return 0;
}