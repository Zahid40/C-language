#include <stdio.h>

int sum(int a, int b); // this is for declaration of function

void printstar(int n){            //-->>> in this it has argument which is written in code and no return value (means no need c)
    for (int i = 0; i < n; i++)
    {
        printf("%c" , '*');
    }
    
}

int enternumber(){              // it has no arguments but return value is ( i ) which used in code and after it stored in ( c ).
    int i;
    printf("Enter a number = ");
    scanf("%d" , &i);
    return i;
}

int numberstar(){
    int n;
    printf("Enter a number = ");
    scanf("%d" , &n);
    for (int i = 0; i < n; i++)
    {
        printf("%c" , '$');
    }
}
int main()
{
    int a,b,c;
    a=45;
    b=56;
    c= sum(a,b);
    // printf("The sum of two numbers is %d" , c);

    // printstar(8);  // 8 is an arrgument

    c = enternumber();
    // printf("the entered number is %d" , c);

    numberstar();

    return 0;
}

int sum(int a ,int b){     // this is the actual funtcion
    return a+b;            //-->> in this it has a and b as a argument and return value is c>>>
}
