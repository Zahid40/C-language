#include <stdio.h>
#include <string.h>

// void String_rev(char arr[]){
//     printf("%s",strrev(arr));
// }

void reverser(int arr[])
{
    int temp;
    for (int i = 0; i < 7 / 2; i++)
    {
        temp = arr[i];
        arr[i] = arr[6 - i];
        arr[6 - i] = temp;
    }
}
void printloop(int arr[])
{
    for (int i = 0; i < 7; i++)
    {
        printf("%d\n", arr[i]);
    }
}

int main()
{
    // char str[] = {'1' ,'2','3','4','5','\0'};
    // printf("%s\n" , str);
    // String_rev(str);

    int dodge[] = {1, 2, 3, 4, 5, 6, 7};
    printloop(dodge);
    printf("After Reversing\n");
    reverser(dodge);
    printloop(dodge);

    return 0;
}