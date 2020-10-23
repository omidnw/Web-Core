#ifndef BODYTEXTTAG_H
#define BODYTEXTTAG_H

void h1(char* FilEName_Type, char value[1000]);
void h2(char* FilEName_Type, char value[1000]);
void h3(char* FilEName_Type, char value[1000]);
void h4(char* FilEName_Type, char value[1000]);
void h5(char* FilEName_Type, char value[1000]);
void h6(char* FilEName_Type, char value[1000]);

void atags(char* FilEName_Type, char value[1000], char href[255], char target[255], char style[255], char download[255], char hreflang[255], char media[255], char ping[255], char referrerpolicy[255], char rel[255], char type[255], int endcondition);
void atage(char* FilEName_Type);

#endif