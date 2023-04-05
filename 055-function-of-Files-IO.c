#include <stdio.h>
int main()
{
    FILE *ptr = NULL;
    char read_string[40];
    char read_string2[80] = "This content_insert_with_files_by_string_in_c_language\n";

    //Read_File
    ptr = fopen("055-test-file.txt","r");
    fscanf(ptr,"%s",read_string);
    printf("This is From FILE : \n%s",read_string);

    //Write_File
    ptr = fopen("055-test-file.txt","a");
    fprintf(ptr,"%s",read_string2);
    fclose(ptr);
    
    return 0;
}