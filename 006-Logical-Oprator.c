#include <stdio.h>

int main()
{
    int a, b ;
    a=60;
    b=0;

    printf("a&&b = %d\n" , a&&b);
    printf("a||b = %d\n" , a||b);
    printf("!a&&b = %d\n" , !a&&b);
    return 0;
}

// Non-zero element is considerd as TRUE 
// zeroth element is considerd as FALSE 
