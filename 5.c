// 4. Write a function to transform string into lowercase

#include<stdio.h>
#include<string.h>
int main()
{
    char str[50];
    printf("Enter a string: ");
    fgets(str,50,stdin);
    str[strcspn(str,"\n")]='\0';
    
    lower(str);
    printf("%s",str);

    return 0;
}
void lower(char strg[])
{
    int i;
    for ( i = 0;strg[i]; i++)
        if (strg[i]>=65 && strg[i]<=90)
            strg[i]=strg[i]+32;
}