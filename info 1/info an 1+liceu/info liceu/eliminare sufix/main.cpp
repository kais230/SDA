#include <cstring>
#include <iostream>
using namespace std;

int main()
{
    char s[256], *p, prcuv[256], aux[256],sol[256]="";
    cin.get(s, 256);

    strcpy(aux, s);

    p = strtok(s, "*");
    strcpy(prcuv, p);

    while (p != NULL)
    {
        if (strlen(p) >= strlen(prcuv))
        {
            if (strcmp(p + strlen(p) - strlen(prcuv), prcuv) != 0)
            {
                strcat(sol,p);
            }
        }
        else strcat(sol,p);
        strcat(sol,"*");
        p = strtok(NULL, "*");
    }
    cout << sol;
    return 0;
}
