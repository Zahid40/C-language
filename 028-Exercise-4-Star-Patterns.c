#include <stdio.h>

void star_pattern(){
    printf("*****\n****\n***\n**\n*");
}

void reverse_star_pattern(){
    printf("*\n**\n***\n****\n*****");
}

int main()
{
    int num;
    printf("Enter Which type of STAR pattern do you want\n for , \nStar_pattern  0\nReversed_Star_pattern  1\n your option ==");
    scanf("%d" , &num);
    if (num == 0)
    {
        star_pattern();
    }
    else if (num == 1)
    {
        reverse_star_pattern();
    }
    else{
        printf("Invalid Input");
    }
    return 0;
}