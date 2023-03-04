#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
class Forma {
public:
	double xA, yA, xB, yB, xC, yC, xD, yD;
	Forma()
	{
		xA = 0; yA = 0;
		xB = 0; yB = 0;
		xC = 0; yC = 0;
		xD = 0; yD = 0;
	}
	Forma(double x1, double y1, double x2, double y2, double x3, double y3, double x4, double y4)
	{
		xA = x1; yA = y1;
		xB = x2; yB = y2;
		xC = x3; yC = y3;
		xD = x4; yD = y4;
	}
	void afis()
	{
		cout << "Avem forma" << endl;
	}
};
class patrat :public Forma {
public:
	double l1, l2, l3, l4, l5;
	bool validP;
	patrat() = default;
	patrat(double x1, double y1, double x2, double y2, double x3, double y3, double x4, double y4)
	{
		validare_patrat();
	}
	bool validare_patrat()
	{
		l5 = (xA - xB) * (xA - xB) + (yA - yB) * (yA - yB);
		l1 = sqrt(abs(l5));
		l2 = sqrt(abs((((xC - xB) * (xC - xB)) + ((yC - yB) * (yC - yB)))));
		l3 = sqrt(abs((((xC - xD) * (xC - xD)) + ((yC - yD) * (yC - yD)))));
		l4 = sqrt(abs((((xA - xD) * (xA - xD)) + ((yA - yD) * (yA - yD)))));
		if ((l1 == l3) && (l2 == l4) && (l1== l2))
		{
			validP= 1;
		}
		else
		{
			validP = 0;
		}
		return validP;
	}
	double arie()
	{
		return l1 * l2;
	}
	double perimetru()
	{
		return l1 +l2+ l3+ l4;
	}
	void afis()
	{
		if (validP) cout << "patrat";
	
	}
};
class dreptunghi :public Forma {
public:
	double l1, l2, l3, l4, l5;
	bool validD;
	dreptunghi() = default;
	dreptunghi(double x1, double y1, double x2, double y2, double x3, double y3, double x4, double y4)
	{
		validare_dreptunghi();
	}
	bool validare_dreptunghi()
	{
		l5 = (xA - xB) * (xA - xB) + (yA - yB) * (yA - yB);
		l1 = sqrt(abs(l5));
		l2 = sqrt(abs((((xC - xB) * (xC - xB)) + ((yC - yB) * (yC - yB)))));
		l3 = sqrt(abs((((xC - xD) * (xC - xD)) + ((yC - yD) * (yC - yD)))));
		l4 = sqrt(abs((((xA - xD) * (xA - xD)) + ((yA - yD) * (yA - yD)))));
		if ((l1 == l3) && (l2 == l4))
		{
			validD = 1;
		}
		else
		{
			validD = 0;
		}
		return validD;
	}
	double arie()
	{
		return l1 * l2;
	}
	double perimetru()
	{
		return l1 + l2 + l3 + l4;
	}
	void afis()
	{
		if (validD) cout << "dreptunghi";
	}
};
int main()
{
	double xA, yA, xB, yB, xC, yC, xD, yD;
	cin >> xA >> yA >> xB >> yB >> xC >> yC >> xD >> yD;
	dreptunghi dr;
	patrat pr;
	if (dr.validD == 1) //dreptunghi
		if (dr.validare_dreptunghi( xA,yA, xB, yB, xC, yC, xD, yD))
		{
			cout << fixed << setprecision(2) << dr.arie() << endl << dr.perimetru() << endl;
			dr.afis();
		}

	if (pr.validP == 1) //patrat
		if (pr.validare_patrat(xA, yA, xB, yB, xC, yC, xD, yD)) {
			cout << fixed << setprecision(2) << pr.arie() << endl << pr.perimetru() << endl;
			pr.afis();
		}
}
