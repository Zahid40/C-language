#include <stdio.h>
#include <string.h>
int main()
{
    char s1[] = {"Hello , Good Morning"};
    char s2[] = {"Zahid"};
    char s3[] = {""};

    puts(strcat(s1 , s2));  // catination of string
    printf("\n");

    printf("The Lenght of s1 is = %d\n" , strlen(s1));  //lendth of string s1 not including NULL char
    printf("The Lenght of s2 is = %d\n" , strlen(s2));

    printf("%s\n" , strrev(s1));     // reverse the string value
    printf("%s\n" , strcpy(s3,s2));  // copy s3 in s2
    printf("%d\n" , strcmp(s1,s2));    //ASCII value Comparision -->Return 0 , Means Matched -->Return +ve , Means 1st string ASCII value < 2nd string ASCII value  --> Return -ve , Means 1st ASCII value > 2nd ASCII value.
    //ASCII value  = alphabatical order 
    return 0;
}