#include <iostream>
using namespace std;

class Biblioteca {
public:
	long int v[1000],k=0;
	int nr;
	virtual void GetValue(long int x,int k)
	{
		v[k] = x;
	}
	virtual void getNR(int x)
	{
		nr = x;
	}

	
};

class Biblioteca_veche: public Biblioteca{

public:

	void afis()
	{
		for (int i = nr-k-2; i >=0; i--)
		{
			cout << v[i] << " ";
		}
	}
	void stergere()
	{
		for (int i = 0; i < nr - k; i++)
		{
			if (v[i] > 9999)
			{
				k++;
				for (int j = i; j < nr; j++)
				{
					v[j] = v[j + 1];
				}
				for (int j = i-1; j < nr-1; j++)
				{
					v[j] = v[j + 1];
				}
				i = i - 2;


			}
		}


	}

};
class Biblioteca_copii: public Biblioteca {
public:

	void afis()
	{
		for (int i = k; i <nr-k; i++)
		{
			cout << v[i] << " ";
		}
	}
    void stergere()
	{
		for (int i = 0; i < nr - k; i++)
		{
			if (v[i] > 9999)
			{
				k++;
				for (int j = i; j < nr; j++)
				{
					v[j] = v[j + 1];
				}


			}
		}


	}

};

int main()
{
	long int a[1000];
	int n=0;
	
	while (cin >> a[n])
	{
		n++;
	}
	Biblioteca_veche BV;
	Biblioteca_copii BC;
	
	Biblioteca* b;
	b = &BV;
	for (int i = 0; i < n; i++)
	{
		b->GetValue(a[i],i);
	}
	b->getNR(n);
	BV.stergere();
	BV.afis();

	cout << endl;
	
	b = &BC;
	for (int i = 0; i < n; i++)
	{
		
		b->GetValue(a[i], i);
	}
	b->getNR(n);
	BC.stergere();
	BC.afis();



}
