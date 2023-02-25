// fib_recursive(int n):
//        if n==1 or n==2
//           return n
//         else:
//            return fib_recursive(n-1) + fib_recursive(n-2)

#include <stdio.h>

int fib_rec(int n)
{
    if (n == 0 ||n == 1 || n == 2)
    {
        return n;
    }
    else
    {
        return fib_rec(n - 1) + fib_rec(n - 2);
    }
}

int main()
{
    int number;
    for (int i = 0; i < 10; i++)
    {
        printf("Enter THe Fibbonic Number order of  = ");
        scanf("%d", &number);
        printf("fibbonic Number is %d\n", fib_rec(number));
    }

    return 0;
}
