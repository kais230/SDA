#include <iostream>

using namespace std;

int main()
{int i,j,k,a[50][50],v[50];


    for(i=0;i<6;i++)
        for(j=0;j<4;j++)
     cin>>a[i][j];

for(int i=0; i<6; i++)
    {
        if(a[i][2]%2==0)
        {
            for(int j=i+1; j<6; j++)
            {
                if(a[j][2]%2==0 && a[j][2]<a[i][2])
                {
                    k=a[i][2];
                    a[i][2]=a[j][2];
                    a[j][2]=k;
                }
            }
        }
    }
cout<<endl;
 for(i=0;i<6;i++)
 {
        for(j=0;j<4;j++)
     cout<<a[i][j]<< " ";
   cout<<endl;
 }


    return 0;
}
