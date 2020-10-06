#include "defines.h"

int index_html()
{
    char* HomePage = CreateFileHtml("","");
    htmls(HomePage, "fa", True);

    heads(HomePage);
    title(HomePage, "Home Page!");
    heade(HomePage);

    bodys(HomePage, "");
    h1(HomePage, "Hello World!");
    h2(HomePage, "Hello World!");
    h3(HomePage, "Hello World!");
    h4(HomePage, "Hello World!");
    h5(HomePage, "Hello World!");
    h6(HomePage, "Hello World!");
    divs(HomePage, True,True,"container");
    atags(HomePage, "google!", "https://www.google.com", "_blank", True,
           True, True, True, True, True, True, True, 0);
    atage(HomePage);
    dive(HomePage);
    bodye(HomePage);

    htmle(HomePage);
    OpenHtmlFile(HomePage);
    return 0;
}
