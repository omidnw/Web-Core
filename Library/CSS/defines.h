#include "../Config/defines.h"

char* CreateFileCss(char FileName[100], char FileType[10])
{
    char *prefix = malloc(sizeof(char)*120);
    strcpy(prefix, "./");
    char prefixdot[2]=".";
    if (FileType == "css")
    {
        const char* folder;
        folder = "Styles";
        struct stat sb;
        int idxToDel = 0;
        if (stat(folder, &sb) == 0 && S_ISDIR(sb.st_mode))
        {
            if (FileName == "")
            {
                strcpy(prefix, "./Styles/");
                strcat(prefix, FilENameCss);
                FILE *fp;
                fp = fopen(prefix, "w+");
                fclose(fp);
                for(int i=0; i<=strlen("./Styles"); i++)
                {
                    memmove(&prefix[idxToDel], &prefix[idxToDel + 1], strlen(prefix) - idxToDel);
                }
                printf("%s Created and Edited! & Finish Process!\n", prefix);
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
                for(int i=0; i<=strlen("./Styles"); i++)
                {
                    memmove(&prefix[idxToDel], &prefix[idxToDel + 1], strlen(prefix) - idxToDel);
                }
                printf("%s Created and Edited! & Finish Process!\n", prefix);
                return prefix;
            }
        }
        else
        {
            if (FileName == "")
            {
                system("mkdir Styles");
                strcpy(prefix, "./Styles/");
                strcat(prefix, FilENameCss);
                FILE *fp;
                fp = fopen(prefix, "w+");
                fclose(fp);
                for(int i=0; i<=strlen("./Styles"); i++)
                {
                    memmove(&prefix[idxToDel], &prefix[idxToDel + 1], strlen(prefix) - idxToDel);
                }
                printf("Styles Directory Created! | %s Created and Edited! & Finish Process!\n", prefix);
                return prefix;
            }
            else
            {
                system("mkdir Styles");
                strcpy(prefix, "./Styles/");
                strcat(prefix, FileName);
                strcat(prefix, prefixdot);
                strcat(prefix, FileType);
                FILE *fp;
                fp = fopen(prefix, "w+");
                fclose(fp);
                for(int i=0; i<=strlen("./Styles"); i++)
                {
                    memmove(&prefix[idxToDel], &prefix[idxToDel + 1], strlen(prefix) - idxToDel);
                }
                printf("Styles Directory Created! | %s Created and Edited! & Finish Process!\n", prefix);
                return prefix;
            }
        }
    }
    else
    {
        printf("Error Cannot Create a StyleSheet File!");
        return "";
    }
}
