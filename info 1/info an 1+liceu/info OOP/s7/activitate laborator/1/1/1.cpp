#include <iostream>
using namespace std;

class Forma {
public:
	double baza, inaltime;

	void get_value(double b,double h)
	{
		baza = b;
		inaltime = h;
}


};


class Triunghi :public Forma {
public:
	double arie()
	{
		return baza * inaltime / 2;
    }

};


class Patrulater : public Forma {
public:

	double arie()
	{
		return baza * inaltime;
	}


};



int main()
{
	double x, y;
	cin >> x >> y;

	Triunghi T;
	Patrulater P;

	Forma* F = &P;
	F->get_value(x, y);
	cout << P.arie()<<endl;


    F=&T;
	F->get_value(x, y);
	cout << T.arie();



}

