#include "../../../Config/defines.h"
void htmlatagstart(char* FilEName_Type, char value[1000], char href[255], char target[255], char style[255], char download[255], char hreflang[255], char media[255], char ping[255], char referrerpolicy[255], char rel[255], char type[255], int endcondition)
{
    FILE *fp;
    fp = fopen(FilEName_Type, "a+");
    char atagarray[3555]="<a ";
    if(style == True)
    {
    }
    else if(style == "")
    {
        strcat(atagarray, "style=\"");
        strcat(atagarray, "\" ");
    }
    else
    {
        strcat(atagarray, "style=\"");
        strcat(atagarray, style);
        strcat(atagarray, "\" ");
    }
    if(href == True)
    {
    }
    else if(href == "")
    {
        strcat(atagarray, "href=\"");
        strcat(atagarray, "\" ");
    }
    else
    {
        strcat(atagarray, "href=\"");
        strcat(atagarray, href);
        strcat(atagarray, "\" ");
    }
    if(hreflang == True)
    {
    }
    else if(hreflang == "")
    {
        strcat(atagarray, "hreflang=\"");
        strcat(atagarray, "");
        strcat(atagarray, "\" ");
    }
    else
    {
        strcat(atagarray, "hreflang=\"");
        strcat(atagarray, hreflang);
        strcat(atagarray, "\" ");
    }
    if(download == True)
    {
    }
    else if(download == "")
    {
        strcat(atagarray, "download=\"");
        strcat(atagarray, "");
        strcat(atagarray, "\" ");
    }
    else
    {
        strcat(atagarray, "download=\"");
        strcat(atagarray, download);
        strcat(atagarray, "\" ");
    }
    if(media == True)
    {
    }
    else if(media == "")
    {
        strcat(atagarray, "media=\"");
        strcat(atagarray, "");
        strcat(atagarray, "\" ");
    }
    else
    {
        strcat(atagarray, "media=\"");
        strcat(atagarray, media);
        strcat(atagarray, "\" ");
    }
    if(ping == True)
    {
    }
    else if(ping == "")
    {
        strcat(atagarray, "ping=\"");
        strcat(atagarray, "");
        strcat(atagarray, "\" ");
    }
    else
    {
        strcat(atagarray, "ping=\"");
        strcat(atagarray, ping);
        strcat(atagarray, "\" ");
    }
    if(referrerpolicy == True)
    {
    }
    else if(referrerpolicy == "")
    {
        strcat(atagarray, "referrerpolicy=\"");
        strcat(atagarray, "");
        strcat(atagarray, "\" ");
    }
    else
    {
        strcat(atagarray, "referrerpolicy=\"");
        strcat(atagarray, referrerpolicy);
        strcat(atagarray, "\" ");
    }
    if(rel == True)
    {
    }
    else if(rel == "")
    {
        strcat(atagarray, "rel=\"");
        strcat(atagarray, "");
        strcat(atagarray, "\" ");
    }
    else
    {
        strcat(atagarray, "rel=\"");
        strcat(atagarray, rel);
        strcat(atagarray, "\" ");
    }
    if(target == True)
    {
    }
    else if(target == "")
    {
        strcat(atagarray, "target=\"");
        strcat(atagarray, "");
        strcat(atagarray, "\" ");
    }
    else
    {
        strcat(atagarray, "target=\"");
        strcat(atagarray, target);
        strcat(atagarray, "\" ");
    }
    if(type == True)
    {
    }
    else if(type == "")
    {
        strcat(atagarray, "type=\"");
        strcat(atagarray, "");
        strcat(atagarray, "\" ");
    }
    else
    {
        strcat(atagarray, "type=\"");
        strcat(atagarray, type);
        strcat(atagarray, "\" ");
    }
    strcat(atagarray, ">");
    if (value != "")
    {
        strcat(atagarray, value);
    }
    else
    {
        strcat(atagarray, "");
    }
    if (endcondition == 1)
    {
        strcat(atagarray, "</a>\n");
        fprintf(fp, atagarray);
        fclose(fp);
    }
    else
    {
        fprintf(fp, atagarray);
        fclose(fp);
    }
}
void htmlatagend(char* FilEName_Type)
{
    FILE *fp;
    fp = fopen(FilEName_Type, "a+");
    fprintf(fp, "</a>\n");
    fclose(fp);
}
void htmlptagstart(char* arguments[])// char* FileName, 
{
    FILE *fp;
    //fp = fopen(FileName, "a+");
    char* inputarray[10];
    printf("\n%d\n", sizeof(arguments)/sizeof(*arguments));
    fprintf(fp, "</a>\n");
    fclose(fp);
}
// h1 to h6 tags
void htmlh1tag(char* FilEName_Type, char value[1000])
{
    FILE *fp;
    char h1tagarray[1000] = "<h1>";
    strcat(h1tagarray, value);
    strcat(h1tagarray, "</h1>\n");
    fp = fopen(FilEName_Type, "a+");
    fprintf(fp, h1tagarray);
    fclose(fp);
}
void htmlh2tag(char* FilEName_Type, char value[1000])
{
    FILE *fp;
    char h1tagarray[1000] = "<h2>";
    strcat(h1tagarray, value);
    strcat(h1tagarray, "</h2>\n");
    fp = fopen(FilEName_Type, "a+");
    fprintf(fp, h1tagarray);
    fclose(fp);
}
void htmlh3tag(char* FilEName_Type, char value[1000])
{
    FILE *fp;
    char h1tagarray[1000] = "<h3>";
    strcat(h1tagarray, value);
    strcat(h1tagarray, "</h3>\n");
    fp = fopen(FilEName_Type, "a+");
    fprintf(fp, h1tagarray);
    fclose(fp);
}
void htmlh4tag(char* FilEName_Type, char value[1000])
{
    FILE *fp;
    char h1tagarray[1000] = "<h4>";
    strcat(h1tagarray, value);
    strcat(h1tagarray, "</h4>\n");
    fp = fopen(FilEName_Type, "a+");
    fprintf(fp, h1tagarray);
    fclose(fp);
}
void htmlh5tag(char* FilEName_Type, char value[1000])
{
    FILE *fp;
    char h1tagarray[1000] = "<h5>";
    strcat(h1tagarray, value);
    strcat(h1tagarray, "</h5>\n");
    fp = fopen(FilEName_Type, "a+");
    fprintf(fp, h1tagarray);
    fclose(fp);
}
void htmlh6tag(char* FilEName_Type, char value[1000])
{
    FILE *fp;
    char h1tagarray[1000] = "<h6>";
    strcat(h1tagarray, value);
    strcat(h1tagarray, "</h6>\n");
    fp = fopen(FilEName_Type, "a+");
    fprintf(fp, h1tagarray);
    fclose(fp);
}
