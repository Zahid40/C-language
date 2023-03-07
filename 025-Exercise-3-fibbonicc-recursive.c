// fib_recursive(int n):
//        if n==1 or n==2
//           return n
//         else:
//            return fib_recursive(n-1) + fib_recursive(n-2)

#include <stdio.h>

int fib_rec(int n)
{
    if (n == 1 || n == 2)
    {
        return n-1;
    }
    else
    {
        return fib_rec(n - 1) + fib_rec(n - 2);
    }
}

int fib_ittr(int n)
{
    int a=0,b=1;
    for (int i = 0; i < n-1; i++)
    {
        b=a+b;
        a=b-a;
    }
    return a; 
}

int main()
{
    int number;
    for (int i = 0; i < 10; i++)
    {
        printf("Enter the Index no. for Fibonacci series = ");
        scanf("%d", &number);
        if (number == 0)
        {
            printf("Index starts from 1\n\n");
            continue;
        }
        
        printf("The Value of fabonacci number at position %d using Itterative approch is %d\n",number, fib_ittr(number));
        printf("The Value of fabonacci number at position %d using Resursive approch is %d\n",number, fib_rec(number));
    }

    return 0;
}
