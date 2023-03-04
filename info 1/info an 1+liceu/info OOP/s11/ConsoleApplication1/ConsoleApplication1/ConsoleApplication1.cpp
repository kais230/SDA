#include <iostream>
#include <iomanip>
using namespace std;
class figura_geometrica {

public:
	
	virtual double Arie() = 0;
	virtual double Perimetru() = 0;
};

class dreptunghi :public figura_geometrica {
public:
	double Lat1,Lat2;
	void get(double L1,double L2)
	{
		Lat1 = L1;
		Lat2 = L2;
	}
	double Arie()override
	{
		return Lat1*Lat2;
	}
	double Perimetru()override
	{
		return 2*(Lat1+ Lat2);
	}
};
class cerc :public figura_geometrica {
public:
	double R;
	void get(double R1)
	{
		R = R1;
	}
	double Arie()override
	{
		return 3.14 * R*R;
	}
	double Perimetru()override
	{
		return 2 * 3.14 * R;
	}
};

int main()
{
	double r,a,b;
	cin >> r>>a>>b;
	cerc c;
	c.get(r);
	cout << fixed<<setprecision(2)<<c.Perimetru() << endl;
	cout << fixed << setprecision(2) << c.Arie() << endl;

	dreptunghi d;
	d.get(a,b);
	cout << fixed << setprecision(2) << d.Perimetru()<<endl;

	cout << fixed << setprecision(2) << d.Arie();

	return 0;
}