#include <iostream>

using namespace std;

int main()
{
	unsigned n,k;
	cin>>n>>k;
	unsigned cn = n;
	if (n&(1<<k))n=n&~(1<<k);
	else n=n|(1<<k);

	cout<<n;
	return 0;
}
