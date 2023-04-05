#include <stdio.h>

int plaindrom(int num)
{
    int reversed = 0;
    while (num != 0)
    {
        int remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num = num / 10;
    }
    return reversed;
}

int main()
{
    int number;
    printf("Enter the Number :");
    scanf("%d", &number);
    printf("The Orignal number is %d\n",number);
    printf("The Reversed number is %d\n", plaindrom(number));
    if (plaindrom(number) == number)
    {
        printf("The Number is Plaindrom");
    }
    else
    {
        printf("The Number is Not Palindrom");
    }
    return 0;
}