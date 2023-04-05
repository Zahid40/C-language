#include <stdio.h>
int main()
{
    FILE *ptr = NULL;
    ptr = fopen("055-test-file.txt","r");

//get charecter------------------------------------------
    char c = fgetc(ptr);
    printf("the charrecter was read is %c\n",c);

//get string---------------------------------------------
    char str[30];
    fgets(str,20,ptr);
    printf("The String was Read :: %s\n",str);

//put charecter------------------------------------------
    ptr = fopen("055-test-file.txt","a");
    fputc('c',ptr);

//put string---------------------------------------------
    fputs("Hello This Is Zahid\n",ptr);

    fclose(ptr);
    return 0;
}