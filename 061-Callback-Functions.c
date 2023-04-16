#include <stdio.h>
#include <stdlib.h>

int sum(int a,int b){
    return a+b;
}

void greedhello(int(*funcptr)(int,int)){
    printf("Hello User\n");
    printf("The Sum is %d\n",funcptr(7,8));
}

void greedgoodmorning(int(*funcptr)(int,int)){
    printf("Good Morning\n");
    printf("The Sum is %d\n",funcptr(7,8));
}



int main()
{
    int (*ptr)(int,int);
    ptr = sum;
    greedhello(ptr);
    greedgoodmorning(ptr);
    return 0;
}