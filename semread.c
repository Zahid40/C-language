#include <stdio.h>
#include <string.h>
#include <math.h>

#define fof(n) (5*pow(n,3) + (2*pow(n,1)) + 3 )

int main (){

    float n;

    printf("Enter a number:\n");
    scanf("%lf", &n);

    printf("%.2f\n\n", fof(n));

    return (0);        
}