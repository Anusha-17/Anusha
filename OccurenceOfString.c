#include <stdio.h>
#include <string.h>
#define MAX_SIZE 100 
int main()
{
    char str[MAX_SIZE], word[MAX_SIZE];
    int i, index, found = 0;
    printf("Enter any string: ");
    gets(str);
    printf("Enter word to be searched: ");
    gets(word);
    index = 0;
    while(str[index] != '\0')
    {
        if(str[index] == word[0])
        {
            i=0;
            found = 1;
            while(word[i] != '\0')
            {
                if(str[index + i] != word[i])
                {
                    found = 0;
                    break;
                }
                i++;
            }
        }
        if(found == 1)
        {
            break;
        }
        index++;
    }
    if(found == 1)
    {
        printf("\n'%s' is found at index %d.", word, index);
    }
    else
    {
        printf("\n'%s' is not found.", word);
    }
    return 0;
}

