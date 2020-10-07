// start body tag!
#include "../../../Config/defines.h"
void htmlbodystart(char* FilEName_Type, char dir[3])
{
    char bodyarray[50]="<body ";
    FILE *fp;
    fp = fopen(FilEName_Type, "a+");
    if (dir==True) // default Left To Right
    {
        fprintf(fp, "<body>");
        fclose(fp);
    }
    else
    {
        if (dir=="")
        {
            strcat(bodyarray, "dir=\"");
            strcat(bodyarray, "ltr");
            strcat(bodyarray, "\">\n");
            fprintf(fp, bodyarray);
            fclose(fp);
        }
        else
        {
            strcat(bodyarray, "dir=\"");
            strcat(bodyarray, dir);
            strcat(bodyarray, "\">\n");
            fprintf(fp, bodyarray);
            fclose(fp);
        }
    }
}
// end body tag!
void htmlbodyend(char* FilEName_Type)
{
    FILE *fp;
    fp = fopen(FilEName_Type, "a+");
    fprintf(fp, "</body>\n");
    fclose(fp);
}
// div tag!
void htmldivtagstart(char* FilEName_Type, char _class[100], char id[100], char name[100])
{
    FILE *fp;
    char divtagarray[300]="<div ";
    fp = fopen(FilEName_Type, "a+");
    if (_class == True)
    {
    }
    else if (_class == "")
    {
        strcat(divtagarray, "class=\"");
        strcat(divtagarray, "\" ");
    }
    else
    {
        strcat(divtagarray, "class=\"");
        strcat(divtagarray, _class);
        strcat(divtagarray, "\" ");
    }
    if (id == True)
    {
    }
    else if (id == "")
    {
        strcat(divtagarray, "id=\"");
        strcat(divtagarray, "\" ");
    }
    else
    {
        strcat(divtagarray, "id=\"");
        strcat(divtagarray, id);
        strcat(divtagarray, "\" ");
    }
    if (name == True)
    {
    }
    else if (name == "")
    {
        strcat(divtagarray, "name=\"");
        strcat(divtagarray, "\" ");
    }
    else
    {
        strcat(divtagarray, "name=\"");
        strcat(divtagarray, name);
        strcat(divtagarray, "\" ");
    }
    strcat(divtagarray, ">\n");
    fprintf(fp, divtagarray);
    fclose(fp);
}
void htmldivtagend(char* FilEName_Type)
{
    FILE *fp;
    fp = fopen(FilEName_Type, "a+");
    fprintf(fp, "</div>\n");
    fclose(fp);
}
