#include <stdio.h>

int main(int argc, char const *argv[])
{
    printf("Learn About Pointers in C\n");
    int a=374;
    int *ptra = &a;
    int *ptr2 = NULL;
    printf("The Value of A is = %d\n" , a);
    printf("The value with ptra of a is = %d\n" , *ptra);
    printf("The value with ptra of a is = %x\n" , *ptra); //using Hexadecimal format specifire
    printf("The value with ptra of a is = %p\n" , *ptra); //using Pointer format specifire
    printf("The Address of ptra is = %p\n" , &ptra); //address of ptra
    printf("The Address of a is = %p\n" , &a); //address of a
    printf("The Address of a with ptra is = %p\n" , ptra); 

    //NULL pointer
    printf("The address of ptr2 is = %p\n" , ptr2); //it doesnt have any variable it means ptr2 donot having any value
    return 0;
}
