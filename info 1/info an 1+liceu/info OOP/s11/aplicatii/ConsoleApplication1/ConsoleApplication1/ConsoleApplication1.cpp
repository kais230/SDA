#include <iostream>
#include <string.h>
using namespace std;


class firma
{public:
	int bani;
	void get_firma_bani(int b)
	{
		bani = b;
	}

};

class resurse
{public:
	char nume_resursa[20];
	int pret,B,cantitate=0;

	void get_resurse_nume(char num[20])
	{
		strcpy_s(nume_resursa, num);
	}
	void get_resurse_pret(int p)
	{
		pret = p;
	}
};

class tara:public resurse
{
public:
	char nume_tara[20];
	int bani_taxe, Fericire = 100;
	char c_cumparare[20], c_vanzare[20];

	void get_tara(char nume_t[20], int bani_t, char c_c[20], char c_v[20])
	{
		strcpy_s(nume_tara, nume_t);
		bani_taxe = bani_t;
		strcpy_s(c_cumparare, c_c);
		strcpy_s(c_vanzare, c_v);
	}

	void productie();
	void prelucrare();
	void consum()
	{


	}
	void afisare()
	{
		if (Fericire > 100) cout << nume_tara << " " << 100;
		else if (Fericire < 50) cout << nume_tara << " " << 50;
		else cout << nume_tara << " " << Fericire;

	}

};



int main()
{
	int N, K;
	cin >> N;
	int i;

	resurse R[100];
	char nume[20];
	int pret1;
	for (i = 0; i < N; i++)
	{
		cin.get(nume, 20);
		R[i].get_resurse_nume(nume);

	}
	for (i = 0; i < N; i++)
	{
		
		cin >> pret1;
		R[i].get_resurse_pret(pret1);

	}



	int baniF;
	cin >> baniF;
	firma F;
	F.get_firma_bani(baniF);




	cin >> K;
	tara T[100];
	int baniTaxe;
	char C_Cu[20], C_Va[20];
	for(i=0;i<K;i++)
	{
		cin.get(nume, 20);
		cin >> baniTaxe;
		cin.get(C_Cu, 20);
		cin.get(C_Va, 20);
		T[i].get_tara(nume, baniTaxe, C_Cu, C_Va);
	}



	int N_productie;
	cin >> N_productie;
	int CANTITATE_OBTINUTA;
	char RESURSA_OBTINUTA[20];
	for (i = 0; i < N_productie; i++)
	{
		cin.get(RESURSA_OBTINUTA, 20);
		cin >> CANTITATE_OBTINUTA;
		//T[j].Productie()
		
	}




	int  N_PRELUCRARE;
	cin >> N_PRELUCRARE;
	int CANTITATE_CONSUMATA,  CANTITATE_OBTINUTA;
	char RESURSA_CONSUMATA[20], RESURSA_OBTINUTA[20];
	for (i = 0; i < N_PRELUCRARE; i++)
	{
		cin.get(RESURSA_CONSUMATA, 20);
		cin >> CANTITATE_CONSUMATA;
		cin.get(RESURSA_OBTINUTA, 20);
		cin >> CANTITATE_OBTINUTA;

		//T.Prelucare()

	}




	int N_CONSUM;
	cin >> N_CONSUM;

	for (i = 0; i < N_CONSUM; i++)
	{
		cin.get(RESURSA_CONSUMATA, 20);
		cin >> CANTITATE_CONSUMATA;
		T[i].consum()

	}




	int D;
	cin >> D;
	char NUME_TARA;
	int N_CUMPARARE;
	for (i = 0; i <= N_CUMPARARE; i++)
	{
		// Resursa Cantitate
	}

	int N_VANZARE;

	for (i = 0; i < N_VANZARE; i++)
	{

	}






		return 0;
}

