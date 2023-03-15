#include <stdio.h>
#include <string.h>

// typedef <previous_NAME> <New_name> 

typedef union information {   //you can only use 1 of them Member in UNION data type
    int number;
    char favt_char;
}info;

int main()
{
    info zahid;
    zahid.favt_char = 'k';   //another wise u get Garbage Value like This 
    zahid.number = 20;  // the last one have correct value all time who ever is

    printf("The Fav charecter is %c and Number is %d\n" , zahid.favt_char , zahid.number);

    return 0;
}