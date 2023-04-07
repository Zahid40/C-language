#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *replace(const char * str, const char * oldword, const char * newword)
{
    char * resultstring;
    int i, count = 0;
    int newWordLenght = strlen(newword);
    int oldWordLenght = strlen(oldword);

    // count The Number of Times old word occurs in the string
    for (i = 0; str[i] != '\0'; i++){
        if (strstr(&str[i], oldword) == &str[i])
        {
            count++;

            // jump over this word
            i = i + oldWordLenght - 1;
        }
    }
    // Making a new string to fit in the replaced words
    resultstring = (char *)malloc(i + count * (newWordLenght - oldWordLenght) + 1);
    i = 0;
    while (*str)
    {
        // compare the substring with result
        if (strstr(str, oldword) == str)
        {
            strcpy(&resultstring[i], newword);
            i += newWordLenght;
            str += oldWordLenght;
        }
        else
        {
            resultstring[i] = *str;
            i += 1;
            str += 1;
        }
    }
    resultstring[i] = '\0';
    return resultstring;
}

int main()
{
    FILE *ptr = NULL;
    FILE *ptr2 = NULL;
    ptr = fopen("058-Bill.txt", "r");
    ptr2 = fopen("058-genBill.txt", "a");
    char str[200];
    fgets(str, 200, ptr);
    printf("old recipt :: %s\n", str);

    // call replace function
    char name[10];
    char item[10];
    char outlet[10];
    printf("Enter Your name : ");
    scanf("%s",name);
    printf("Enter Your item : ");
    scanf("%s",item);
    printf("Enter Your outlet : ");
    scanf("%s",outlet);
    char * newstr;
    newstr = replace(str, "{{name}}", name);
    newstr = replace(newstr, "{{outlet}}", outlet);
    newstr = replace(newstr, "{{item}}", item);
    printf("new recipt :: %s\n", newstr);

    // write into another file
    fprintf(ptr2, "%s\n", newstr);

    fclose(ptr);
    fclose(ptr2);
    return 0;
}