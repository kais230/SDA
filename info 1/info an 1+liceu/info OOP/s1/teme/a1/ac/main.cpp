#include <iostream>
using namespace std;


class senzori
{
	char ID[5];
	 int conc;
	 int temp;
	 int umid;

public:
	senzori();
	senzori(char c[5]);
	{
		strcpy(ID, c);
	}
	senzori(int c, int t, int u);
	{
		conc = c;
		temp = t;
		umid = u;
	}

	int verificare();

	void afisare(int ok);
	{
		if (ok == 0) cout << ID << endl;
		else cout << "Functionare corecta";

	}

};

int senzori::verificare(senzori obj)
{
	int ok = 1;
	if (conc < 6 || conc>10) ok = 0;
	if (temp < 15 || temp>25) ok = 0;
	if (umid>80) ok = 0;
	return ok;
}
void senzori::afisare(int ok)
int main()
{
	int n, m,i,j,co,te,um,ok;
	char sid[5];
	cin >> n >> m;
	senzori s;

	for (i = 0; i < n; i++)
	{
		ok = 1;
		cin >> sid;
		senzori(sid);
		for (j = 0; j < m; j++)
		{
			cin >> co >> te >> um;
			senzori(co, te, um);
			if (s.verificare() == 0) ok = 0;
		}
		if (ok == 0) s.afisare(ok);
	}




}

