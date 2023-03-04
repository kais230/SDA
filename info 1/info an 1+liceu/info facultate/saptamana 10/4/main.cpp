#include <iostream>
#include <string.h>
using namespace std;

char gaseste_litera_mare(char* p)
{
    if (strlen(p) == 0 )return  'a';
    if (p[0] >= 65 && p[0] <= 90)return p[0];
    else {
        return gaseste_litera_mare(p + 1);
    }
    return   'a';
}



int main()
{
    char s[10000],a;
    cin.get(s, 10000);
    a=gaseste_litera_mare(s);
    if (a == 'a')cout << "-1";
    else cout << a;
    return 0;
}
