#include <stdio.h>                     //inculed system header file
#include "051-Preprocessors-in-C.c"    //include file in same directory

#define PI 3.14     //define variable
#define SQUARE(r) r*r     //define function by using define preproccessor

int main()
{
    printf("The value od Pi is %f\n",PI);

    int r = 4;
    printf("The area of circle is %f\n",PI*SQUARE(r));
    return 0;
}