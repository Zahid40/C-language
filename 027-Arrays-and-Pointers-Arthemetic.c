#include <stdio.h>
int main()
{
    // int a = 34;           // this int takes 4bit in memory thats why   // char takes 1bit
    // int *ptra = &a;
    // printf("%d\n" , ptra);       // address of ptra
    // printf("%d\n" , ptra+1);    // when i print this its +4 address of orignal ptra

    // ptra++;
    // printf("%d\n" , ptra); //this work on orignal ptra value
    // ptra--;
    // printf("%d\n" , ptra);

    int arr[] = {1,2,3,4,5,6,7,8,9};
    printf("Value of 3rd element of array is %d\n" , arr[3]);

    printf("The Address of First Element of the array is = %p\n" , &arr[0]);
    printf("The Address of First Element of the array is = %p\n" , arr);
    printf("The Address of second Element of the array is = %p\n" , &arr[1]);
    printf("The Address of second Element of the array is = %p\n" , arr+1);
    printf("The Address of second Element of the array is = %p\n\n" , arr+2);

    printf("The Value of First Element of the array is = %d\n" , *(&arr[0]));
    printf("The Value of First Element of the array is = %d\n" , *arr);
    printf("The Value of second Element of the array is = %d\n" , arr[1]);
    printf("The Value of second Element of the array is = %d\n" , *(arr+1));
    printf("The Value of second Element of the array is = %d\n" , *arr+1);
    printf("The Value of second Element of the array is = %d\n" , *arr+2);
    return 0;
}