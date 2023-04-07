#include <stdio.h>
#include <string.h>

#define MAX_SIZE 100

int main()
{
    char str1[MAX_SIZE], str2[MAX_SIZE];
    int freq1[256] = {0}, freq2[256] = {0}; 
    int i;

    printf("Enter first string: ");
    fgets(str1, MAX_SIZE, stdin);

    printf("Enter second string: ");
    fgets(str2, MAX_SIZE, stdin);

    
    if(strlen(str1) != strlen(str2))
    {
        printf("Strings are not anagrams\n");
        return 0;
    }

   
    for(i=0; str1[i] != '\0'; i++)
    {
        freq1[str1[i]]++;
    }

  
    for(i=0; str2[i] != '\0'; i++)
    {
        freq2[str2[i]]++;
    }


    for(i=0; i<256; i++)
    {
        if(freq1[i] != freq2[i])
        {
            printf("Strings are not anagrams\n");
            return 0;
        }
    }

    printf("Strings are anagrams\n");

    return 0;
}
