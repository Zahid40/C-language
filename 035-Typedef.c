#include <stdio.h>
#include <string.h>

// typedef <previous_NAME> <New_name> 

typedef struct information {
    int number;
    char favt_char;
}info;        //directly using typrdef to custom name  

struct hourin_structure {
    int dddddd;
};

int main()
{
    info zahid;
    zahid.favt_char = 'k';
    zahid.number = 20;

    printf("The Fav charecter is %c and Number is %d\n" , zahid.favt_char , zahid.number);

    typedef struct hourin_structure hour;    // also you re-custom name in a function.
    hour chole;
    chole.dddddd = 67686;
    printf("%d" , chole.dddddd);
    return 0;
}