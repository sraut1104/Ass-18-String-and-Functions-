// 3. Write a function to compare two strings.

#include<stdio.h>
#include<string.h>
int main()
{
    char str1[50];
    char str2[50];

    printf("Enter 1st string: ");
    fgets(str1,50,stdin);
    str1[strcspn(str1,"\n")]='\0';
    
    printf("Enter 2nd string: ");
    fgets(str2,50,stdin);
    str1[strcspn(str2,"\n")]='\0';

    compStrings(str1,str2);
    
    return 0;
}
void compStrings(char str3[],char str4[])
{
    int i;
    for ( i = 0; str3[i] ; i++)
    {
        if(str3[i]==str4[i]);
        else
            break;
    }
    if(str3[i]!='\0')
        if(str3[i]>str4[i])
            printf("Strings are not in dictionary order");
        else
            printf("Strings are in dictionary orer");
    else
            printf("Both strings are same");
}