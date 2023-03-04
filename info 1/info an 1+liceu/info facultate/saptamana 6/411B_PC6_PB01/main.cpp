#include <iostream>

using namespace std;

int main()
{
	unsigned long long int n, m, p;
	cin >> n;
	while (n)
	{
		m = n;
		n = 0;
		p = 1;
		while (m >= 127)
		{
			n = (m % 10) * p + n;
			m /= 10;
			p = p * 10;
		}
		cout << (char)m;
	}

	return 0;
}
