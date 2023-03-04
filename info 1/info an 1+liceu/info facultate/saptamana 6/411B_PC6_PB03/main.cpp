#include <iostream>
#include <math.h>
using namespace std;

int prim(int);
int main()
{
	int n, x,maxim=0;
	cin >> x;
	while (x>0)
	{
		if (prim(x)==1 && x>maxim)maxim = x;
		cin >> x;
	}

	if (maxim != 0)cout << maxim;
	else cout << "nu exista";
	return 0;
}
int prim(int nr) {
	int ok, d;
	if (nr == 2)ok = 1;
	else {
		if (nr % 2 == 0)return 0;
		else
		{
			d = 3; ok = 1;
			while ((d <=sqrt(nr)) && (ok == 1))
			{
				if (nr % d == 0)return 0;
				d = d + 2;

			}
		}
	}
	if (ok == 1)return 1;
	else return 0;
}
