#include <iostream>

using namespace std;

void QS(int v[], int st, int dr)
{
	if(st < dr)
	{
		int m = (st + dr) / 2;
		int aux = v[st];
		v[st] = v[m];
		v[m] = aux;
		int i = st , j = dr, d = 0;
		while(i < j)
		{
			if(v[i] > v[j])
			{
				aux = v[i];
				v[i] = v[j];
				v[j] = aux;
				d = 1 - d;
			}
			i += d;
			j -= 1 - d;
		}
		QS(v, st , i - 1);
		QS(v, i + 1 , dr);
	}
}

int main()
{
    int n,i,j, w, a[100][100], k, v[1000];
    cin>>n>>w;
    if(w%2==0) w+=1;

    for(i=1; i<=n; i++)
        for( j=1; j<=n; j++)
            cin>>a[i][j];

    for( i=w/2+1; i<=n-w/2; i++)
        for( j=w/2+1; j<=n-w/2; j++)
        {
            k=1;
            for(int i1=i-w/2; i1<=i+w/2; i1++)
                for(int j1=j-w/2; j1<=j+w/2; j1++)
                    v[k++]=a[i1][j1];
            QS(v,1,k-1);
            a[i][j]=v[(k-1)/2+1];
        }

    for( i=1; i<=n; i++)
    {
        for( j=1; j<=n; j++)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}
