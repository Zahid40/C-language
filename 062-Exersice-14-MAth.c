#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.141592

float Edistance(int x1, int y1, int x2, int y2)
{
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

void AreaOfcircle(float (*Fptr)(int , int, int , int ) , int x1 , int y1 , int x2 , int y2)
{
    printf("The Area of That circle is %f\n", PI * pow(Fptr(x1,y1,x2,y2), 2));
}

int main()
{
    int x1,y1,x2,y2;
    printf("Enter Corrdinates\nx1 = ");
    scanf("%d",&x1);
    printf("y1 = ");
    scanf("%d",&y1);
    printf("x2 = ");
    scanf("%d",&x2);
    printf("y2 = ");
    scanf("%d",&y2);

    float (*ptr)(int,int,int,int);
    ptr = Edistance;

    AreaOfcircle(ptr,x1,y1,x2,y2);
    printf("The Distance is %f", ptr(x1,y1,x2,y2));
    return 0;
}