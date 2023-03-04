#include <iostream>
#include <string.h>
using namespace std;





int main()
{int n,m,i,j;
int v[100];


char s[100][100],c[100];
  cin>>n;



  cin>>c;

    for(i=0;i<n;i++)
    {
        strncpy(s[i],c,n);
        strcpy(c,c+n);

    }

  for(i=0;i<n;i++)
    {
        cout<<s[i];

        cout<<endl;
    }


    return 0;
}
