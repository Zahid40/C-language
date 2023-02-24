#include <stdio.h>
int main()
{
    int martix[2][4] = {{4, 5, 6, 7},
                        {0, 1, 2, 3}};
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf(" %d ", martix[i][j]);
        }
        printf("\n");
    }
}