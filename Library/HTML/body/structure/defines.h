#include "main.h"
void bodys(char* FilEName_Type, char dir[3])
{
    htmlbodystart(FilEName_Type, dir);
}
void bodye(char* FilEName_Type)
{
    htmlbodyend(FilEName_Type);
}
void divs(char* FilEName_Type, char _class[100], char id[100], char name[100])
{
    htmldivtagstart(FilEName_Type, _class, id, name);
}
void dive(char* FilEName_Type)
{
    htmldivtagend(FilEName_Type);
}
