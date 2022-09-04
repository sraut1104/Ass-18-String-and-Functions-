// 8. Write a function to count words in a given string

#include<stdio.h>
#include<string.h>>
int main()
{
    char str[50];
    printf("Enter a string: ");
    fgets(str,50,stdin);
    str[strcspn(str,"\n")]='\0';

    printf("Total no of words = %d",wordsCount(str));

    return 0;
}
int wordsCount(char strg[])
{
    int i,count_word=0;
    for ( i = 0; strg[i]; i++)
    {
        if((strg[i]>=65 && strg[i]<=90) || (strg[i]>=97 && strg[i]<=122))
            count_word++;
    }
    return count_word;   
}