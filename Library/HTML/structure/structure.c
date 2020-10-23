#include "structure.h"
#include "../../Config/defines.h"
void htmltagstart(char* FilEName_Type, char lang[2], char xml[100])
{
    FILE *fp;
    char htmltagarray[150] = "\n<html ";
    fp = fopen(FilEName_Type, "a+");
    if (lang==True && xml==True)
    {
        strcat(htmltagarray, ">\n");
        fprintf(fp, htmltagarray);
        fclose(fp);
    }
    else
    {
        if (lang==True)
        {
            strcat(htmltagarray, "lang=\"en\"");
        }
        else
        {
            strcat(htmltagarray, "lang=\"");
            strcat(htmltagarray, lang);
            strcat(htmltagarray, "\"");
        }
        if (xml==True)
        {
            strcat(htmltagarray, ">\n");
            fprintf(fp, htmltagarray);
            fclose(fp);
        }
        else
        {
            strcat(htmltagarray, "xml=\"");
            strcat(htmltagarray, xml);
            strcat(htmltagarray, "\"");
            strcat(htmltagarray, ">\n");
            fprintf(fp, htmltagarray);
            fclose(fp);
        }
    }
}
void htmltagend(char* FilEName_Type)
{
    FILE *fp;
    fp = fopen(FilEName_Type, "a+");
    fprintf(fp, "</html>");
    fclose(fp);
    int idxToDel = 0;
    for(int i=0; i<=1; i++)
    {
        memmove(&FilEName_Type[idxToDel], &FilEName_Type[idxToDel + 1], strlen(FilEName_Type) - idxToDel);
    }
    printf("%s Created and Edited! & Finish Process!\n", FilEName_Type);
}
void htmls(char* FilEName_Type, char lang[2], char xml[100])
{
    htmltagstart(FilEName_Type, lang, xml);
}
void htmle(char* FilEName_Type)
{
    htmltagend(FilEName_Type);
}