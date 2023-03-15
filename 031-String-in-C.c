#include <stdio.h>
int main()
{
    char name[] = "Zahid";
    char name2[] ={'Z' , 'a' , 'h' , 'i' , 'd'};     // this is invalid string because it doesnt contain NULL charecter

    char namevalid[] = {'K' , 'h' , 'u' , 's' , 'h' , 'i' , '\0'};

    char stringbyuser[20];
    gets(stringbyuser);
    printf("%s\n" , stringbyuser);
    puts(stringbyuser);
    for (int i = 0; i < 6; i++)
    {
    printf("%c" , name[i]);
        
    }
    printf("\n");
    printf("%s\n" , stringbyuser);
    printf("%s\n" , name2);
    printf("%s\n" , namevalid);
    
    return 0;
}