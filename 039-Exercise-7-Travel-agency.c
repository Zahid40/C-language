#include <stdio.h>
#include <string.h>

typedef struct infor
{
    int Driving_Licence_number;
    char name[30];
    char buscolor[30];
    int Kms;
} bhar;

int main()
{
    bhar d1, d2, d3;
    int wd;
    for (int i = 0; i < 10; i++)
    {
        printf("Which Driver ?\n= ");
        scanf("%d", &wd);
        if (wd == 1)
        {
            printf("--------Enter Your following Details --------\n\n");
            printf("Driving Licence Number = ");
            scanf("%d", &d1.Driving_Licence_number);
            printf("Name = ");
            scanf("%s", &d1.name);
            printf("Bus Colour = ");
            scanf("%s", &d1.buscolor);
            printf("Kms = ");
            scanf("%d", &d1.Kms);
        }
        else if (wd == 2)
        {
            printf("--------Enter Your following Details --------\n\n");
            printf("Driving Licence Number = ");
            scanf("%d", &d2.Driving_Licence_number);
            printf("Name = ");
            scanf("%s", &d2.name);
            printf("Bus Colour = ");
            scanf("%s", &d2.buscolor);
            printf("Kms = ");
            scanf("%d", &d2.Kms);
        }
        else{
            printf("firse bhar");
        }

        printf("\nFor Continue = 1\nFor Exit = 0\n");
        int D;
        scanf("%d", &D);
        if (D == 1)
        {
            continue;
        }
        else if (D == 0)
        {
            break;
        }
    }

    if (wd == 1)
    {
        printf("-------------The Details of Driver 1 -------------------\n");
        printf("Driving Licence Number = %d\n", d1.Driving_Licence_number);
        printf("Name = %s\n", d1.name);
        printf("Bus Colour = %s\n", d1.buscolor);
        printf("Kms = %d\n", d1.Kms);
    }
    else if (wd == 2)
    {
        printf("-------------The Details of Driver 2 -------------------\n");
        printf("Driving Licence Number = %d\n", d2.Driving_Licence_number);
        printf("Name = %s\n", d2.name);
        printf("Bus Colour = %s\n", d2.buscolor);
        printf("Kms = %d\n", d2.Kms);
    }

    return 0;
}

/*
You manage a travel agency and you want your n drivers to input their following details :
1. Name
2. Driving Licence no.
3. Route
4. Kms
Your Program should print details of the drivers in a butiful fasion.

use Structures.
*/