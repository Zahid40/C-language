#include <stdio.h>
#define PI = 3.1444444      // now you cant change value of PI it is an constant
 int main()
 {
    const int a = 8;        // now you cant change value of a it is an constant
    float b = 7.4863487;
    
    printf("The value of a is %d and the value of b is %f\n" ,a , b);

    // the first format specifier (%d) is used for first variable (a) and as well as second format specifier (%f) for second variable (b)

    printf("%11.4f\n" , b);
//  here in line   -->11 represents how many charecters take in output and -->.4 represents how many decimal places will shown in output  , if you take negative value left white spaces after.

    printf("My back slash \a");
    return 0;
 }

 