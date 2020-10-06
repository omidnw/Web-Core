void htmls(char* FilEName_Type, char lang[2], char xml[100])
{
    #include "main.h"
    htmltagstart(FilEName_Type, lang, xml);
}
void htmle(char* FilEName_Type)
{
    #include "main.h"
    htmltagend(FilEName_Type);
}
