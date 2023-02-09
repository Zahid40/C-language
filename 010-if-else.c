#include <stdio.h>

int main()
{
    int age ;
    printf("Enter Your Age = ");
    scanf("%d" , &age);
    printf("You have enterd %d as your age.\n" , age);

    if (age>=18)
    {
        printf("You can vote !");
    }
    else
    {
        printf("You cannot Vote !\n");
        printf("You can vote after %d Years ." , 18-age);
    }
    return 0;
}
