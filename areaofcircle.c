#include <stdio.h>

int main()
{
    float r ;
    float pi =3.142857;
    printf("Enter Radius of circle = ");
    scanf("%f" , &r);

    printf("Perimeter of circle = %f\n" , 2*pi*r);
    printf("Area of Circle = %f\n" , pi*r*r);
    return 0;
}

