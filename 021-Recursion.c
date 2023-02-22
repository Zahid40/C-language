#include <stdio.h>

int factorial(int num){
    if (num == 1 || num == 0)
    {
        return 1;
    }
    else
    {
        return (num*factorial(num - 1));
    }
}

int main()
{
    int number;
    printf("Enter the number which numbers factorial wants for = ");
    scanf("%d" , &number);
    printf("The factorial of %d is %d" , number , factorial(number));
    return 0;
}
