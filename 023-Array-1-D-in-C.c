#include <stdio.h>
int main()
{
    int marks[4];
    // int marks[4] = {45,67,45,67};          declare and initialize in one line
    for (int i = 0; i < 4; i++)
    {
        printf("Enter the marks for student %d is = " , i+1);
        scanf("%d" , &marks[i]);
    }
    for (int i = 0; i < 4; i++)
    {
        printf("The Marks of Student %d is %d\n" , i+1 , marks[i]);
    }
    
    







    // marks[0] = 34;
    // printf("Marks of student 1 is %d\n" , marks[0]);
    // marks[0] = 56;
    // marks[1] = 60;
    // marks[2] = 45;
    // marks[3] = 20;
    // printf("Marks of student 1 is %d\n" , marks[0]);
    // printf("Marks of student 2 is %d\n" , marks[1]);
    // printf("Marks of student 3 is %d\n" , marks[2]);
    // printf("Marks of student 4 is %d\n" , marks[3]);
    
    return 0;
}
