#include <iostream>
using namespace std;


template <class T> class Multime
{
public:
	T v[100];
	int n;
	Multime(T vec[100], int nr)
	{
		n = nr;
		for (int i = 0; i < n; i++)
		{
			v[i] = vec[i];
		}
	}
	~Multime()
	{

	}

	T Adaugare(T x,int poz)
	{
		for (int i = n; i >poz; i--)
		{
			v[i] = v[i - 1];
		}
		v[poz] = x;
	}
	T Eliminare(T x,int poz)
	{
		for (int i = poz; i < n; i++)
		{
			v[i] = v[i + 1];
		}
		n = n - 1;
	}
	Multime operator +(Multime const &A)
	{
		Multime res(v,n);
		int j = 0;
		
		for (int i = n; i < n + A.n; i++)
		{
			res.v[i] = A.v[j];
			j++;
		}
		res.n = n + A.n;
		return res;
	}

	Multime operator *(Multime const& A)
	{
		Multime res(v, n);
		int k = 0;
		
		for (int i = 0; i < n ; i++)
		{
			
			for (int j = 0; j < A.n; j++)
			{
				if (A.v[j] == v[i])
				{
					res.v[k] = v[i];
					k++;
				}
			}
		}
		res.n = k;
		return res;
	}

	void afisare()
	{
		for (int i = 0; i < n; i++)
			cout << v[i] << " ";
	}



};




int main()
{
	int a, b;
	int m1[100], m2[100];

	cin >> a;
	for (int i = 0; i < a; i++)
		cin >> m1[i];

	cin >> b;
	for (int i = 0; i < b; i++)
		cin >> m2[i];


	Multime <int> X(m1,a), Y(m2,b);

	Multime <int> Z = X + Y;

	
	X.afisare();
	cout << endl;
	Y.afisare();
	cout << endl;
	Z.afisare();
	cout << endl;

	Multime <int> R = X * Y;
	R.afisare();



}

