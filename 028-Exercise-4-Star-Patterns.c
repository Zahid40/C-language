#include <stdio.h>

int printstar(int rows)
{
    
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

int Reverse_printstar(int rows)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j <= rows - i - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

int superstar(int rows)
{
    for (int i = 0; i < rows; i++)
    {

        for (int j = 0; j < rows - i - 1; j++)
        {
            printf(" ");
        }
        for (int j = 0; j < i; j++)
        {
            printf("*");
        }
        for (int j = 0; j < i; j++)
        {
            printf("*");
        }

        printf("\n");
    }
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf(" ");
        }
        for (int j = 0; j < rows - i - 1; j++)
        {
            printf("*");
        }
        for (int j = 0; j < rows - i - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

int main()
{
    int rows;
    for (int i = 0; i < 10; i++)
    {
        printf("How MAny rows you Want = ");
        scanf("%d", &rows);
        // printstar(rows);
        // Reverse_printstar(rows);
        superstar(rows);
    }
    return 0;
    
}