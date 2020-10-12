//
// Created by Erfan Azhdari on 10/12/20.
//

#include <stdio.h>
#include <stdlib.h>
#include <err.h>

unsigned long hash(const char *str, size_t len) {
    unsigned long hash = 5381;
    int c;
    int i = 0;

    while ((c = *str++) && i < len){
        i++;
        hash = ((hash << 5) + hash) + c;
    }

    return hash;
}
void transform(char* string, size_t len) // makes the string upper case and replaces '-' with '_'
{
    const char OFFSET = 'a' - 'A';
    int i = 0;
    while (*string && i < len)
    {
        i++;
        *string = (*string >= 'a' && *string <= 'z') ? *string -= OFFSET : *string;
        if (*string == '-'){
            *string = '_';
        }
        string++;
    }
}
int main(int argc, char *argv[]) {
    if (argc == 2){
        printf("%ld\n", hash(argv[1], 255));
    }
    else if (argc == 3) {
        char* line;
        size_t len;
        FILE* f = fopen(argv[1], "r");
        if (f == NULL){
            printf("null file pointer returned for input\n");
            exit(1);
        }
        FILE* out = fopen(argv[2], "w");
        if (out == NULL){
            printf("null file pointer returned for output\n");
            exit(1);
        }
        while ((line = fgetln(f, &len))){
            len-=1;
            unsigned long hash_result = hash(line, len);
            transform(line, len);
            fprintf(out ,"#define WEBCORE_ATTR_%.*s %lu\n", (int)len , line, hash_result);
        }
        if (!feof(f))
            err(1, "fgetln");
        fclose(f);
        fclose(out);
    }
    else {
        printf(
                "usage:\n"
                "%s [string to be hashed]\n"
        , argv[0]);
    }

    return 0;
};
