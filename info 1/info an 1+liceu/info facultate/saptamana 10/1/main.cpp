#include <iostream>
#include <string.h>
using namespace std;

int main()
{

    char reala[100000], intreaga[100000], virgula[2];
    cin.get(reala, 100000, '.');
    cin.get(intreaga, 100000);
    strcpy(intreaga, intreaga + 1);
    int i = 0;

    while (intreaga[i] == '0')
    {
        i++;
    }
    i--;
    strcpy(intreaga, intreaga + i + 1);

    cout << reala << " " << intreaga << " " << i + 1;


    return 0;
}
