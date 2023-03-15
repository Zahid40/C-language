#include <stdio.h>
#include <string.h>

struct student
{
    int roll;
    char name[30];
    float marks;
} /*zahid,jaideep,vipin*/; // these Declared as GLOBAL variables

/*struct student zahid,vipin,jaideep;     //Also Declaring As GLOBAL variable
void noumber(){
    zahid.roll = 5;
    printf("%d" , zahid.roll);
}*/

int main()
{
    struct student zahid, jaideep, vipin; // Declaring as In-Function Varible

    zahid.roll = 1; // putting value in variables  ,   by using Structure Member Oprator [.]
    vipin.roll = 2;
    jaideep.roll = 3;

    zahid.marks = 97.89;
    vipin.marks = 87.56;
    jaideep.marks = 70.45;

    /*zahid.name = "Zahid";        // wrong way putting VAlue for A String Value
    printf("%s" , zahid.name);*/

    strcpy(zahid.name, "Zahid");
    strcpy(vipin.name, "Vipin");
    strcpy(jaideep.name, "Jaideep");

    printf("Roll Number %d , Name = %s Got %.2f in Science.\n", zahid.roll, zahid.name, zahid.marks);
    printf("Roll Number %d , Name = %s Got %.2f in Science.\n", vipin.roll, vipin.name, vipin.marks);
    printf("Roll Number %d , Name = %s Got %.2f in Science.\n", jaideep.roll, jaideep.name, jaideep.marks);

    // noumber();
    return 0;
}