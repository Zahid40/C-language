#include <stdio.h>

// Typecasting syntex  --->>>   (type) value;

int main(int argc, char const *argv[])
{
    int a = 6;
    float b = (float)37/5;  // must use this for exact answer
    printf("The Value of a is %d\n" , a);
    printf("The Value of b is in inteager %d\n" , (int)b);
    printf("The Value of b is in float %f\n" , b);

    return 0;
}
