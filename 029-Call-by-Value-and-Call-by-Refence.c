#include <stdio.h>

// call by Value 

// int jj(int a, int b)
// {
//     return a + b;
// }
// int main()
// {
//     int x = 3, y = 2;
//     int h = jj(x, y);
//     printf("%d", h);
//     return 0;
// }

// Call by Reference

void alter_Values_(int *x , int *y){
     *x = *x + *y;
     *y = *x - *y;
     return;
}

int main()
{
    int a = 4 , b = 2;
    printf("The Value of a is %d and b is %d\n" , a , b );
    alter_Values_(&a,&b);
    printf("The New Value of a is %d and b is %d\n" , a , b );

    return 0;
}