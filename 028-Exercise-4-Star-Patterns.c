#include <stdio.h>

int printstar(int rows){
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


int main()
{
    int rows;
    for (int i = 0; i < 10; i++)
    {
    printf("How MAny rows you Want = ");
    scanf("%d" , &rows);
    printstar(rows);
    }
    return 0;
}