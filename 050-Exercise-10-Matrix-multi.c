#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num_rows1, num_cols1, num_rows2, num_cols2;

    // First matrix input
    printf("--------1st Matrix--------\n");
    printf("Enter Rows: ");
    scanf("%d", &num_rows1);
    printf("Enter Columns: ");
    scanf("%d", &num_cols1);

    int matrix1[num_rows1][num_cols1];

    for (int i = 0; i < num_rows1; i++)
    {
        for (int j = 0; j < num_cols1; j++)
        {
            printf("Enter element [%d][%d]: ", i, j);
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("\nMatrix 1:\n");
    for (int i = 0; i < num_rows1; i++)
    {
        for (int j = 0; j < num_cols1; j++)
        {
            printf("%d ", matrix1[i][j]);
        }
        printf("\n");
    }

    // Second matrix input
    printf("\n--------2nd Matrix--------\n");
    printf("Enter Rows: ");
    scanf("%d", &num_rows2);
    printf("Enter Columns: ");
    scanf("%d", &num_cols2);

    int matrix2[num_rows2][num_cols2];

    for (int i = 0; i < num_rows2; i++)
    {
        for (int j = 0; j < num_cols2; j++)
        {
            printf("Enter element [%d][%d]: ", i, j);
            scanf("%d", &matrix2[i][j]);
        }
    }

    printf("\nMatrix 2:\n");
    for (int i = 0; i < num_rows2; i++)
    {
        for (int j = 0; j < num_cols2; j++)
        {
            printf("%d ", matrix2[i][j]);
        }
        printf("\n");
    }

    // Matrix multiplication
    if (num_cols1 != num_rows2)
    {
        printf("\nMatrices are not multiplicative.\n");
    }
    else
    {
        int result_matrix[num_rows1][num_cols2];
        for (int i = 0; i < num_rows1; i++)
        {
            for (int j = 0; j < num_cols2; j++)
            {
                int sum = 0;
                for (int k = 0; k < num_cols1; k++)
                {
                    sum += matrix1[i][k] * matrix2[k][j];
                }
                result_matrix[i][j] = sum;
            }
        }

        printf("\nMatrix multiplication result:\n");
        for (int i = 0; i < num_rows1; i++)
        {
            for (int j = 0; j < num_cols2; j++)
            {
                printf("%d ", result_matrix[i][j]);
            }
            printf("\n");
        }
    }

    return 0;
}
