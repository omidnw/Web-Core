// start head tag!
#include "../../../Config/defines.h"

void htmlheadstart(char* FilEName_Type)
{
    FILE *fp;
    fp = fopen(FilEName_Type, "a+");
    fprintf(fp, "<head>\n");
    fclose(fp);
}
// title
void htmltagtitle(char* FilEName_Type, char title[100])
{
    FILE *fp;
    fp = fopen(FilEName_Type, "a+");
    char titlearray[210]="<title>";
    if(title != "")
    {
        strcat(titlearray, title);
        strcat(titlearray, "</title>\n");
        fprintf(fp, titlearray);
    }
    else
    {
        strcat(titlearray, "");
        strcat(titlearray, "</title>\n");
        fprintf(fp, titlearray);
    }
    fclose(fp);
}
// end head tag!
void htmlheadend(char* FilEName_Type)
{
    FILE *fp;
    fp = fopen(FilEName_Type, "a+");
    fprintf(fp, "</head>\n");
    fclose(fp);
}
