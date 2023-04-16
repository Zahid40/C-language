#include <stdio.h>
#include <stdlib.h>
int sum(int a,int b){
    return a+b;
}

int main()
{
    printf("The Sum Of 5 and 6 is %d\n",sum(5,6));
    int(*FuncPtr)(int,int);   //creating a function pointer by defining as an intezer and takes 2 intezers .
    FuncPtr = &sum; //point the function pointer to the fuction
    int d = (*FuncPtr)(43,39);   //using function pointer or dereferencing a fuction pointer
    printf("The Value of d is %d\n",d);

    return 0;
}