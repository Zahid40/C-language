#include <stdio.h>

int jj(int a , int b){
    return a+b;
}
int main()
{
    int x=3,y=2;
    int h =jj(x,y);
    printf("%d" , h);
    return 0;
}