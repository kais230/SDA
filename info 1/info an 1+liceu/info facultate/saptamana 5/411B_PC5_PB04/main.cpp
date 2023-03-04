#include <iostream>

using namespace std;

int main()
{
	unsigned char p=187,n;
	int k;
	cin >> k;
	while (k!=0)
	{
		n = k ^ p;
		cout << n;
		cin >> k;

	}


	return 0;
}
