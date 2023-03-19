#include <stdio.h>
int main()
{
    char a,b;
    printf("Enter the value of a = ");
    scanf("%c",&a);
    getchar();                            //this will skipped because of ENTER buffer , it takes ENTER as a input for next scanf function. so we use ------getchar()------ it consumes ENTER.
    printf("Enter the value of b = ");
    scanf("%c",&b);
    return 0;
}