#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a = 78;
    int * ptr ;     // this is wild pointer
    // *ptr = 456;
    printf("The Value by wild %d\n",*ptr);
    return 0;
}