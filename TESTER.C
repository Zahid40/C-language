#include <stdio.h>
int main()
{
    int num_A, num_B, num_C, num_D, num_F; /* Variables declaration part*/
    int total_subject;
    int total_point;
    float GPA;
    do
    {
        int i=0 ;
        printf(" \tThis is for calculate your GPA \n");
        printf("Enter number of grade A : ");
        scanf("%d", &num_A);
        printf("Enter number of grade B : ");
        scanf("%d", &num_B);
        printf("Enter number of grade C : ");
        scanf("%d", &num_C);
        printf("Enter number of grade D : ");
        scanf("%d", &num_D);
        printf("Enter number of grade F : ");
        scanf("%d", &num_F);
        /* calculation of the total */
        total_subject = num_A + num_B + num_C + num_D + num_F;

        if (((num_A < 0) || (num_B < 0) || (num_C < 0) || (num_D < 0) || (num_F < 0)) || (total_subject > 7))
        {
            printf(" you should enter your number that you having take again\n");
        }
    
    i++;
    } 
    while (((num_A < 0) || (num_B < 0) || (num_C < 0) || (num_D < 0) || (num_F < 0)) || (total_subject <= 0));


    /* this to calculate and print total_subject, total_point and GPA */
    total_point = num_A * 4 + num_B * 3 + num_C * 2 + num_D * 1 + num_F * 0;
    GPA = (float)(total_point / total_subject);
    /* this to print total subject */
    printf("\nYour grade point average is %.2f \n", GPA);
    /* this selection to get output the students status */
    if (GPA < 2)
        printf("Your academic standing is Probation\n\n");
    else if (GPA < 3)
        printf("Your academic standing is Satisfactory\n\n");
    else if (GPA <= 3.5)
        printf("Your academic standing is Honors\n\n");
    else if (GPA <= 4.00)
        printf("Your academic standing is Highhonors\n\n");
    return 0;
}