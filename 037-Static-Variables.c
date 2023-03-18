#include <stdio.h>

int func1(){
    static int a = 10;
    printf("%d\n",a);
    a++;
    return a;
}

int main()
{
    func1();  // output: 10
    func1();  // output : 11  , becausea is a static variable it reminds there incremented value    bfore when func1 run 1st time.
    func1();
    
    return 0;
}