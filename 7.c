// 7. Write a function to check whether a given string is palindrome or not.

#include<stdio.h>
#include<string.h>
int main()
{
    char str[50];
    printf("Enter a string: ");
    fgets(str,50,stdin);
    str[strcspn(str,"\n")]='\0';

    isPalindrome(str);

    return 0;
}
isPalindrome(char strg[])
{
    int i,l=strlen(strg);
    for ( i = 0; i<l/2; i++)
    {
        if (strg[i]==strg[l-1-i]);
        else  
            break;
    }
    if(i==l/2)
        printf("\nPalindrome");
    else
        printf("\nNot palindrome");  
}