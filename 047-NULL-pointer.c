#include <stdio.h>
int main()
{
    int a = 45;
    int *p = NULL;   //typecast is ((Void*)0)
    if (p != NULL)
    {
    printf("The Address of a is %d\n",*p);
    }
    else{
        printf("Cannot derefrencend");
    }
    
    return 0;
}