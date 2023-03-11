#include <stdio.h>

int func1(int array[]){
    for (int i = 0; i < 5; i++)
    {
        printf("The Value at %d is %d\n" , i , array[i]);
    }
    array[2] = 5678;    //this alter tha value at index 2
    return 0 ;
}

void func2(int *ptr)
{
    for (int i = 0; i < 5; i++)
    {
        printf("The Value at %d is %d\n" , i , ptr[i]);
        printf("The Value at %d is %d\n" , i , *(ptr+i));
    }
    *(ptr + 2) = 99999;
}

void func3(int array2d[2][2]){
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
        printf("The Value at %d,%d is %d\n" , i ,j, array2d[i][j]);
        }
    }
}

int main()
{
    int arr[] = {2,4,7,23,78};
    printf("The value at Index 0 is %d\n" , arr[0]);
    func1(arr);
    printf("The value at Index 0 is %d\n" , arr[0]);
    printf("The value at Index 2 is %d\n" , arr[2]);

    func2(arr);
    printf("The value at Index 2 is %d\n" , arr[2]);

    int arr2d[2][2] = {{2,4},{5,8}};
    func3(arr2d);
    return 0;
}