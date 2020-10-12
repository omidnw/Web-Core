#include <stdio.h>
#include "main.re.h"

int main() {
    webcore_parse("href=http://google.com;"
            "target=_blank;");
    //printf("%s", atagarray);

    return 0;
}
