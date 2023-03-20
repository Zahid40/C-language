#include <stdio.h>
#include "044-temp.c"

int sum;  //ETERNAL VARIABLE  == Global variable  == External storage class

void myfun2(){
    static int z = 0; //STATIC VARIABLE == it stores the value and reminds when you call again.
    printf("%d\n",z);
    z++;
}

int myfunc1(int a,int b)
{
    auto int sum; // AUTO VARIABLE == default storage class
    sum = a+b;
    printf("%d\n", sum);
    return a + b;
}

int main()
{
    extern int sum;  //EXTERN keyword used to import variables from other files.c
    myfunc1(3,6);
    printf("%d\n", sum);   //this a has --0-- value becuse in --myfunc1-- a is defind as an AUTO VARIABLE.

    myfun2();
    myfun2();
    myfun2();
    myfun2();

    register int speed = 300000;   //REGISTER VARIABLE  == for fast asses and use it only for frequently using variable in function.
    printf("%d",speed);
    return 0;
}