// 2. Write a function to reverse a string.

#include<stdio.h>
#include<string.h>
int main()
{
    char str[50];
    printf("Enter a string: ");
    fgets(str,50,stdin);
    str[strcspn(str,"\n")]='\0';

    rev_string(str);
     printf("Reverse strin = %s",str);

    return 0;
}
void rev_string(char strg[])
{
    int i;
    int l=strlen(strg);
    for ( i = 0; i<l/2 ; i++)
    {
        int temp;
        temp=strg[i];
        strg[i]=strg[l-1-i];
        strg[l-1-i]=temp;
    }
}
