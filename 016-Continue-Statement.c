#include <stdio.h>
int main()
{
    int age, i;
    for (i = 0; i < 10; i++)
    {
        printf("Your Player Number is = ");
        printf("%d\n\nEnter Your age for Joining JUNIOR team = ", i);
        scanf("%d", &age);
        if (age > 10)
        {
            printf("Your age is not under catagories of JUNIOR (1 to 10 only) , Join Seniors.\n");
            printf("Not ,");
            // break;
            continue;   //its not run back progroam it is actually go to nxt itteration means next step of loop 
        }
        
        printf("This big para shows it executes after satifi condition and");
        printf("This big para shows it executes after satifi condition and");
        printf("This big para shows it executes after satifi condition and");
        printf("This big para shows it executes after satifi condition and");
        printf("This big para shows it executes after satifi condition and");
        printf("This big para shows it executes after satifi condition and");
        printf("This big para shows it executes after satifi condition and");
        printf("This big para shows it executes after satifi condition and");
        printf("This big para shows it executes after satifi condition and");
    }
    return 0;
}