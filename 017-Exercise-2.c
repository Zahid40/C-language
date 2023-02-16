#include <stdio.h>
int main()
{
    int i,c,k,f,type,con;
    float temp;
    for ( i = 0; i<100; i++)
    {
        printf("Welcome %d to Our Converter servise for TEMPRATURS\n" , i);
        printf("celsius = 1 \nfahrenheit = 2\nkelvin = 3\n");
        printf("Enter Temprature Type = ");
        scanf("%d" ,&type);
        if (type == 1)
        {
            printf("Enter Temprature = ");
            scanf("%f" , &temp);
            printf(">>>>>  %f F\n>>>>>  %f K\n" , temp + 32 , temp + 273.15);
            printf("\n\n Do you want to continue ??\nPress 1 for = YES\n Press any number for = NO\n");
            scanf("%d" , &con);
            if (con ==1)
            {
                continue;
            }
            else
            {
                break;
            }
        }
        
        if (type == 2)
        {
            printf("Enter Temprature = ");
            scanf("%f" , &temp);
            printf(">>>>>  %f C\n>>>>>  %f K\n" , temp - 32 , (temp -32)*5/9 + 273.15);
            printf("\n\n Do you want to continue ??\nPress 1 for = YES\n Press any number for = NO\n");
            scanf("%d" , &con);
            if (con ==1)
            {
                continue;
            }
            else
            {
                break;
            }
        }
        
        if (type == 3)
        {
            printf("Enter Temprature = ");
            scanf("%f" , &temp);
            printf(">>>>>  %f C\n>>>>>  %f F\n" , temp - 273.15 , temp - 459.67);
            printf("\n\n Do you want to continue ??\nPress 1 for = YES\n Press any number for = NO\n");
            scanf("%d" , &con);
            if (con ==1)
            {
                continue;
            }
            else
            {
                break;
            }
        }
        else{
            printf("Read carefully above !!\n\n");
        }
        
    }
    
    return 0;
}
