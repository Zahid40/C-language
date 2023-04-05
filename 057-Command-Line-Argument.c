#include <stdio.h>
int main(int argc, char const *argv[])
{
    printf("The Value of argc is %d\n", argc);
    for (int i = 0; i < argc; i++)
    {
        printf("The count of argument is %d , and the value is :: %s\n",i,argv[i]);
    }
    
    return 0;
}
