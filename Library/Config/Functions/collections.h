#include "../define_standard_library.h"

int sizeofarray(char *input[])
{
    int len=0;
    while (*input)
    {
        len++;
        input++;
    }
    return len;
}

char* asignmentarray(char *input[])
{
    char *tranferarray[2]={"",""};
    int test = sizeofarray(tranferarray);
    printf("\nasignmentarray = %d\n", test);
    // for (int i = 0; i <= sizeofarray(input); i++)
    // {
    // }
    
}