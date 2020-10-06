#include "../Config/defines.h"
#include "structure/defines.h"
#include "head/structure/defines.h"
#include "body/defines.h"

char* CreateFileHtml(char FileName[100], char FileType[10])
{
    char *prefix = malloc(sizeof(char)*120);
    strcpy(prefix, "./");
    char prefixdot[2]=".";
    if (FileName=="" && FileType=="")
    {
        strcat(prefix, FilENameHtml);
        FILE *fp;
        fp = fopen(prefix, "w+");
        fprintf(fp, "<!DOCTYPE html>");
        fclose(fp);
        return prefix;
    }
    else if (FileType == "css")
    {
        const char* folder;
        folder = "Styles";
        struct stat sb;
        if (stat(folder, &sb) == 0 && S_ISDIR(sb.st_mode))
        {
            if (FileName == "")
            {
                strcpy(prefix, "./Styles/");
                strcat(prefix, FilENameCss);
                FILE *fp;
                fp = fopen(prefix, "w+");
                fclose(fp);
                return prefix;
            }
            else
            {
                strcpy(prefix, "./Styles/");
                strcat(prefix, FileName);
                strcat(prefix, prefixdot);
                strcat(prefix, FileType);
                FILE *fp;
                fp = fopen(prefix, "w+");
                fclose(fp);
                return prefix;
            }
        }
        else
        {
            system("mkdir Styles");
            strcpy(prefix, "./Styles/");
            strcat(prefix, FilENameCss);
            FILE *fp;
            fp = fopen(prefix, "w+");
            fclose(fp);
            return prefix;
        }
    }
    else if (FileType == "html" || FileType == "htm" || FileType == "php")
    {
        strcat(prefix, FileName);
        strcat(prefix, prefixdot);
        strcat(prefix, FileType);
        FILE *fp;
        fp = fopen(prefix, "w+");
        if (FileType == "php")
        {
            fclose(fp);
            return prefix;
        }
        else
        {
            fprintf(fp, "<!DOCTYPE html>");
            fclose(fp);
            return prefix;
        }
    }
    else
    {
        return "";
    }
}
void OpenHtmlFile(char* FileName)
{
    int answer;
    printf("Do you want open %s file? yes = -1 & no = 0 : ", FileName);
    scanf("%d", &answer);
    if (answer == -1)
    {
        system(FileName);
    }
    else
    {
        printf("\nFinish Process!\n");
    }
}
