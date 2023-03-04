
#include <iostream>
#include <string.h>
#include <cstring>
using namespace std;

int substringDiff(int k, char s1[1501], char s2[1501]) {

	int p,i,j,u,n,contor=0;
	n = strlen(s1);
	int L = 0;
	while (L < n)
	{
		
		for (i = 0; i <= L; i++)
		{
			for (j = 0; j <= L; j++)
			{
				p = j;
				for (u = i; u < n - L; u++)
				{

					if (s1[u] != s2[p])  contor++;
					p++;
				 }

				if (contor == k)
				{
					for (u = i; u < n - L; u++)
						cout << s1[u];
					cout << endl;
					return n-L-i;
				}
				contor = 0;
			}
		}
		L++;
	}
	return 0;
}

int main()
{
	char s1[1501], s2[1501];
	int  n, k;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> k;
		cin >> s1;
		cin >> s2;
		cout<<substringDiff(k, s1, s2)<<endl;
	}
	
}

