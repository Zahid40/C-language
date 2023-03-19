#include <stdio.h>
#include <stdlib.h> //library for dynamic memory loacation

int main()
{
    int *ptr;
    int n;

    printf("Enter the size of array = ");
    scanf("%d", &n);
    // malloc
    ptr = (int *)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++)
    {
        printf("Enter value for %d for this array = ", i);
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("The value for %d for this array is %d\n", i, ptr[i]);
    }

    return 0;
}