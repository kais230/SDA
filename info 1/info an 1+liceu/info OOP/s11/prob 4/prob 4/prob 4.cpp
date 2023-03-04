#include <iostream>
#include <cstring>
using namespace std;

class Student
{
public:
	int pl, pe, eng;
	Student()
	{
		pl = pe = eng = 0;
	}
	void adaugare(int pl1, int pe1, int eng1)
	{
		pl = pl1;  eng = eng1; pe = pe1; 
	}
};

class Strain : virtual public Student
{
public:
	int pl_s, pe_s, rez_s;
	Strain()
	{
		pl_s = pe_s = rez_s = 0;
	}
	virtual int rezultat2() = 0;
};
class Roman : virtual public Student
{
public:
	int pl_r, pe_r, rez_r;
	Roman()
	{
		pl_r = pe_r = rez_r = 0;
	}
	virtual int rezultat1() = 0;
};
class Rezultat : public Roman, public Strain
{
public:
	int rezultat1()
	{
		if (pl + pe >= 50)
			return pl + pe;
		else
			return 0;
	}
	int rezultat2()
	{
		if (eng >= 50)
		{
			if (pl + pe >= 50)
				return pl + pe;
			else
				return 0;
		}
		else
			return 0;
	}
};
int main()
{
	char v[50][15], cnp[15],nume[15];
	int p1, p2, engr;
	int a[100] = { 0 }, b[100] = { 0 };

	int n=0, i=0;
	while (cin >> nume)
	{
		cin >> cnp;
		cin >> p1 >> p2 >> engr;
		strcpy(v[i], nume);

		n++;
		Rezultat r;
		r.adaugare(p1, p2, engr);

		if (cnp[0] == '7' || cnp[0] == '8')
			a[i] = r.rezultat2();
		else
			a[i] = r.rezultat1();
		b[i] = r.pe;

		i++;
	}
	int k;
	for (i = 0; i <= 10; i++)
	{
	}
	for (int j = 0; j < n - 1; j++)
	{
		for (k = j + 1; k < n; k++)
		{
			if (a[j] < a[k])
			{
				char aux[15];
				strcpy(aux, v[j]);
				strcpy(v[j], v[k]);
				strcpy(v[k], aux);
				int auxx = a[j];
				a[j] = a[k];
				a[k] = auxx;
				int aux2 = b[j];
				b[j] = b[k];
				b[k] = aux2;
			}
		}
	}

	for (int j = 0; j < n - 1; j++)
	{
		for (k = j + 1; k < n; k++)
		{
			if (a[j] == a[k])
			{
				if (b[j] < b[k])
				{
					char aux[15];
					strcpy(aux, v[j]);
					strcpy(v[j], v[k]);
					strcpy(v[k], aux);
					int aux1 = b[j];
					b[j] = b[k];
					b[k] = aux1;
				}
			}
		}
	}
	for (i = 0; i < n; i++)
		cout << v[i] << endl;
	return 0;
}