#include <stdio.h>
#include <stdlib.h> //library for dynamic memory loacation

int main()
{
    char *ptr;
    int n, i = 0;
    while (i < 3)
    {
        printf("Enter the size of array = ");
        scanf("%d", &n);
        // malloc
        ptr = (char *)malloc((n + 1) * sizeof(char));
        printf("enter Your Employee Id = ");
        scanf("%s", ptr);
        printf("Your Id is = %s\n", ptr);
        free(ptr);
        i = i + 1;

    }

    return 0;
}