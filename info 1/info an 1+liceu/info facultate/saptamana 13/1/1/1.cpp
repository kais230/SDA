
#include <iostream>
#include <iomanip>
using namespace std;


float medie(int M[100][100], int nr)
{
	int i, j;
	float s = 0;
	for (i = 0; i < nr; i++)
		for (j = 0; j < nr; j++)
		{
			s = s + M[i][j];
		}

	s = s / (nr * nr);
	return s;
}

int main()
{
    int x[1000][1000], y[100][100], n, m, k, i, j, a, b, c, d, t = 0;
	float v[100];
	cin >> m >> n >> k;

	for (i = 0; i < n; i++)
		for (j = 0; j < m; j++)
			cin >> x[i][j];

	a = 0; b = k;
	c = 0; d = k;

	while (b < n - 1 && d < m - 1)
	{
		if (b == n - 1)
		{
			a = 0; b = k;
			c++; d++;

		}
		for (i = a; i < b; i++)
			for (j = c; j < d; j++)
				y[i][j] = x[i][j];

		v[t] = medie(y, k);
		t++;
		a++; b++;



	}

	if (t % 2 == 0) t = t - 1;

	cout << fixed << setprecision(2)<< v[t / 2 + 1];
}

