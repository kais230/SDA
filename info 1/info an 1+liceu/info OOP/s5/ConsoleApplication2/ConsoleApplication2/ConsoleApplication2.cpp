#include<iostream>

using namespace std;
class Masina
{
public:
	double pret_masina;
	 double autonomie;
	Masina()
	{
		pret_masina = 0;
		autonomie = 0;
	}
	Masina(double x, double y)
	{
		pret_masina = x;
		autonomie = y;
	}

};

class Baterie
{
public:
	double capacitate;
	double durata_viata;
	Baterie()
	{
		capacitate=0;
		durata_viata=0;
	}
	Baterie(double x, double y)
	{
		capacitate = x;
		durata_viata = y;
	}
	
};

class MasinaElectrica : public Masina, public Baterie
{
public:
	double pret_e;
	double autonomie_e ;
	MasinaElectrica()
	{
		pret_e = 0;
		autonomie_e = 0;
	}
	double M_pret()
	{
		pret_e = pret_masina + durata_viata * 12;
		
		return pret_e;

	}
	double M_autonomie()
	{
		autonomie_e = (capacitate * durata_viata) / 100;
		return autonomie_e;
	}
	
	
};
int main()
{
	double a, b, c,d;
	cin >> a >> b;

	cin >> c >> d;
	

	MasinaElectrica Me;
	Me.pret_masina = a;
	Me.autonomie = b;
	Me.capacitate = c;
	Me.durata_viata = d;
	cout << Me.M_pret() << endl << Me.M_autonomie();

	return 0;
}