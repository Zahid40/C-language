#include <stdio.h>
#include <stdlib.h>

int *myfunc()
{
    int a = 89, b = 56, sum;
    sum = a + b;
    return &sum;
}

int main()
{
    int *ptr = (int *)malloc(7 * sizeof(int));
    ptr[0] = 39;
    ptr[1] = 36;
    ptr[2] = 78;
    ptr[3] = 6;
    free(ptr); // ptr is Dangling Pointer

    // case 2
    int *ptr2 = myfunc();

    // case 3
    int *ptr3;
    {
        int a = 45;
        ptr3 = &a;
    }
    // Now Ptr3 is a Dngling Pointer

    return 0;
}