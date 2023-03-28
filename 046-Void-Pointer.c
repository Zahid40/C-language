#include <stdio.h>
int main()
{
    int a=456;
    float b=7.894;
    char c='z'; 

    void *ptr;

    ptr = &a;
    printf("The Value of a is %d\n", *((int *)ptr));    //typecast void pointer into int pointer

    ptr = &b;
    printf("The Value of b is %f\n", *((float *)ptr));    //typecast void pointer into float pointer

    ptr = &c;
    printf("The Value of c is %c\n", *((char *)ptr));    //typecast void pointer into char pointer
    return 0;
}