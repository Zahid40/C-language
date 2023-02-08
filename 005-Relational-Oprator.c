#include <stdio.h>

int main()
{
    int a,b;
    a=17;
    printf("Your Age = ");
    scanf("%d", &b);

    if (a<b)
    {
        printf("Verified , not minor anymore"); 
    }
    else if (a>b)
    {
        printf("Not-Verified , Minor age");
    }
    return 0;
}
