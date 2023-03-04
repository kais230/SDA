#include<iostream>
using namespace std;

int main()
{
	unsigned int n, inv=0;
	int k=31;
	cin >> n;
	unsigned int cn=n;

	while (k>0)
	{
		inv=inv|(cn&1);
		cn=cn>>1;
		inv=inv<<1;
		k--;

	}

	inv=inv|(cn&1);

	if(n==inv)cout<<"da";
	else cout<<"nu";
	return 0;
}
