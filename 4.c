// 4. Write a function to transform string into uppercase

#include<stdio.h>
#include<string.h>
int main()
{
    char str[50];
    printf("Enter a string: ");
    fgets(str,50,stdin);
    str[strcspn(str,"\n")]='\0';
    
    upper(str);
    printf("%s",str);

    return 0;
}
void upper(char strg[])
{
    int i;
    for ( i = 0;strg[i]; i++)
        if (strg[i]>=97 && strg[i]<=122)
            strg[i]=strg[i]-32;
}