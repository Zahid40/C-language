#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    char * oprations;
    int num1,num2;
    oprations = argv[1];
    num1 = atoi(argv[2]);
    num2 = atoi(argv[3]);

    printf("Opration is %s\n",oprations);
    printf("Num1 is : %d\n",num1);
    printf("Num2 is : %d\n",num2);
    printf("Answer :: ");

    if (strcmp(oprations , "add") == 0)
    {
        printf("%d\n",num1 + num2);
    }
    else if (strcmp(oprations , "sub") == 0)
    {
        printf("%d\n",num1 - num2);
    }
    else if (strcmp(oprations , "multi") == 0)
    {
        printf("%d\n",num1*num2);
    }
    else if (strcmp(oprations , "div") == 0)
    {
        printf("%d\n",num1/num2);
    }
    
    return 0;
}
