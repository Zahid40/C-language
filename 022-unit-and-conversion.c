#include <stdio.h>
/*
kms to miles 
inches to foot 
cms to inches
pound to kgs
inches to meters
*/

int main()
{
    int pound,v,kgs,kms,inches,meters,cms,miles,foot;
    float a;
    for (int i = 0; i < 10; i++)
    {
        printf("Enter Value = ");
        scanf("%f" , &a);
        
        eeee:
        printf("Pound = 1\nKg = 2\nKm = 3\nInches = 4\nMeters = 5\nCms = 6\nMiles = 7\nFeet = 8\nEnter Unit input type = ");
        scanf("%d" , &v);
        if (v == 1)
        {
            printf("%f Pounds = %f Kgs\n\n" , a,(float)a*0.453592);
            break;
        }
        else if (v == 2)
        {
            printf("%f Kgs = %f Pounds\n\n" , a,(float)a*2.205);
            break;
        }
        else if (v == 3)
        {
            printf("%f Kms = %f Meters\n" , a,a*1000);
            printf("%f Kms = %f Cms\n" , a,a*100000);
            printf("%f Kms = %f Miles\n" , a,a*0.6214);
            printf("%f Kms = %f Feet\n" , a,a*3280);
            printf("%f Kms = %f Inches\n" , a,a*10.079);
            break;
        }
        else{
            printf("Enter Correct value !!!\n");
            goto eeee;
        }
    }
    return 0;
}

