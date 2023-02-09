#include <stdio.h>

int main()
{
    int color ,age;
    printf("Enter your color number = ");
    scanf("%d" , &color);

    switch (color)
    {
    case 1:
        printf(" Your color is red\n");
        printf("now enter your age = ");
        scanf("%d" ,&age);
        switch (age)
        {
        case 18:
            printf("Your age is 18 , You are able to get RED ranger powers in SPD.");
            break;
        case 19:
            printf("Your age is 19 , You are able to get RED ranger powers in DRAGON-FORCES.");
            break;
        case 20:
            printf("Your age is 20 , You are able to get RED ranger powers in SPECIAL-SPACE-FORCES.");
            break;
        default:
            printf("Your not under criteria this programm only for certain age criteria");
            break;
        }
        break;
    case 2:
        printf(" Your color is blue\n");
        printf("now enter your age = ");
        scanf("%d" ,&age);
        switch (age)
        {
        case 18:
            printf("Your age is 18 , You are able to get BLUE ranger powers in SPD.");
            break;
        case 19:
            printf("Your age is 19 , You are able to get BLUE ranger powers in DRAGON-FORCES.");
            break;
        case 20:
            printf("Your age is 20 , You are able to get BLUE ranger powers in SPECIAL-SPACE-FORCES.");
            break;
        default:
            printf("Your not under criteria this programm only for certain age criteria");
            break;
        }
        break;
    case 3:
        printf(" Your color is green\n");
        printf("now enter your age = ");
        scanf("%d" ,&age);
        switch (age)
        {
        case 18:
            printf("Your age is 18 , You are able to get GREEN ranger powers in SPD.");
            break;
        case 19:
            printf("Your age is 19 , You are able to get GREEN ranger powers in DRAGON-FORCES.");
            break;
        case 20:
            printf("Your age is 20 , You are able to get GREEN ranger powers in SPECIAL-SPACE-FORCES.");
            break;
        default:
            printf("Your not under criteria this programm only for certain age criteria");
            break;
        }
        break;
    default:
    printf("Must choose your number under 1 to 3");
        break;
    }
    return 0;
}
