// h1 to h6 tag!
#include "main.h"
void h1(char* FilEName_Type, char value[1000])
{
    htmlh1tag(FilEName_Type, value);
}
void h2(char* FilEName_Type, char value[1000])
{
    htmlh2tag(FilEName_Type, value);
}
void h3(char* FilEName_Type, char value[1000])
{
    htmlh3tag(FilEName_Type, value);
}
void h4(char* FilEName_Type, char value[1000])
{
    htmlh4tag(FilEName_Type, value);
}
void h5(char* FilEName_Type, char value[1000])
{
    htmlh5tag(FilEName_Type, value);
}
void h6(char* FilEName_Type, char value[1000])
{
    htmlh6tag(FilEName_Type, value);
}
// a tag!
void atags(char* FilEName_Type, char value[1000], char href[255], char target[255], char style[255], char download[255], char hreflang[255], char media[255], char ping[255], char referrerpolicy[255], char rel[255], char type[255], int endcondition)
{
    htmlatagstart(FilEName_Type, value, href, target, style,
                  download, hreflang, media, ping, referrerpolicy, rel, type, endcondition);
}
void atage(char* FilEName_Type)
{
    htmlatagend(FilEName_Type);
}
