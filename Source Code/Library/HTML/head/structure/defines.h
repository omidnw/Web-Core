#include "main.h"

void heads(char* FilEName_Type)
{
    htmlheadstart(FilEName_Type);
}
void title(char* FilEName_Type, char title[100])
{
    htmltagtitle(FilEName_Type, title);
}
void heade(char* FilEName_Type)
{
    htmlheadend(FilEName_Type);
}
