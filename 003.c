#include <stdio.h>

int main()
{
    int a,b;
    printf("a =\n");
    scanf("%d", &a);

    printf("b =\n");
    scanf("%d", &b);

    printf("(a+b)^3= %d\n", a*a*a + b*b*b + 3*a*b*(a+b)); 

    return 0; 
}