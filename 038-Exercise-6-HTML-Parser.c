#include <stdio.h>
#include <string.h>

void parser(char * string)
{
    // printf("%d", strlen(arr));

    int inside=0, index=0;
    for (int i = 0; i < strlen(string); i++)
    {
        if (string[i] == '<')
        {
            inside = 1;
            continue;
        }
        else if (string[i] == '>')
        {
            inside = 0;
            continue;
        }
        if (inside == 0)
        {
            string[index] = string[i];
            index++;
        }
        
    }
    string[index] = '\0';

    //removing spaces from start
    while (string[0] == ' ')
    {
        for (int i = 0; i < strlen(string); i++)
        {
            string[i] = string[i+1];
        }
        
    }
    //removing spaces from end
    while (string[strlen(string) -1] == ' ' )
    {
        string[strlen(string) -1] = '\0';
    }
    
    
}

int main()
{
    char string[] = "<h1>     This is Header       </h1>";
    parser(string);
    printf("the PArse string is ~~%s~~", string);

    return 0;
}