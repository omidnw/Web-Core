#include "defines.h"

int index_html()
{
    char* HomePage = CreateFileHtml("","");
    htmls(HomePage, "fa", True);

    heads(HomePage);
    title(HomePage, "Web Core!");
    heade(HomePage);

    bodys(HomePage, "");
    h1(HomePage, "This WebSite Created By Web Core!");
    divs(HomePage, True,True,"container");
    atags(HomePage, "Click Here To Redirect To Web Core Repository!", "https://github.com/omidnw/Web-Core", "_blank", True,
           True, True, True, True, True, True, True, True, True);
    atags(HomePage, "Click Here For Source Code!", "https://github.com/omidnw/Web-Core/tree/gh-pages/Source%20Code", "_blank", True,
           True, True, True, True, True, True, True, True, True);
    dive(HomePage);
    bodye(HomePage);

    htmle(HomePage);
    OpenHtmlFile(HomePage);
    return 0;
}
