#include <stdio.h>

int multiplication_table(){
    int a,i=1;
    printf("Enter the number you want multiplication table of = ");
    scanf("%d" , &a);
    while (i < 11)
    {
        printf("%d X %d = %d\n" , a , i , a*i);
        i++;
    }
}

int main()
{
    multiplication_table();
    return 0;
}
