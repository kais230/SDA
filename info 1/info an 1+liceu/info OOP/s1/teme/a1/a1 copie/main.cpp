#include <iostream>
#include <string.h>
using namespace std;


class senzori
{private:
	char ID[50];
	 int conc;
	 int temp;
	 int umid;

public:

	senzori();

	void Idsenzor(char c[50]);

	void ValoriSenzori(int c , int t , int u);


	int verificare();

	void afisare(int);


};
senzori::senzori()
{

}

void senzori::Idsenzor(char c[50])
{

	strcpy(ID, c);

}
void senzori::ValoriSenzori(int c, int t, int u)
{
	conc = c;
	temp = t;
	umid = u;
}


int senzori::verificare()
{
	int ok = 1;
	if (conc < 6 || conc>10) ok = 0;
	if (temp < 15 || temp>25) ok = 0;
	if (umid>80) ok = 0;
	return ok;
}
void senzori::afisare(int ok)
{
	if (ok == 0) cout << ID << endl;
	else cout << "Functionare corecta";

}

int main()
{
	int n, m, i, j, co, te, um, ok,okfinal=1,k;
	char s_id[50];
	cin >> n >> m;
	senzori s;

	for (i = 0; i < n; i++)
	{
		ok = 1;
		k=0;
		cin >> s_id;

		s.Idsenzor(s_id);

		for (j = 0; j < m; j++)
		{
			cin >> co >> te >> um;

			s.ValoriSenzori(co, te, um);
			if (s.verificare() == 0) k++;
			else k=0;

			if(k==3) ok=0;
		}
		if (ok == 0)
		{
			s.afisare(ok);
			okfinal = 0;
		}
	}
	if (okfinal == 1) s.afisare(ok);


}

