#include <iostream>
#include <iomanip>
using namespace std;

class Vector
{
public:
	double v[5];

	Vector()
	{
		v[0] = 0;
		v[1] = 0;
		v[2] = 0;
	}

	void GetValueVector(double x, int k)
	{
		v[k] = x;
	}
	void AfisareVector()
	{
		for (int i = 0; i < 3; i++)
			cout << v[i] << " ";
	}
};

class Matrice
{
public:
	double a[5][5];
	Matrice()
	{
		for (int i = 0; i < 3; i++)
			for (int j = 0; j < 3; j++)
				a[i][j] = 0;
	}

	void GetValueMatrice(double x, double y, double z, int k)
	{


		a[k][0] = x;
		a[k][1] = y;
		a[k][2] = z;

	}
	void AfisareMatrice()
	{
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				cout << a[i][j] << " ";
			}
			cout << endl;
		}
	}
	double determinant()
	{
		return a[0][0] * a[1][1] * a[2][2] + a[2][0] * a[0][1] * a[1][2] + a[1][0] * a[2][1] * a[0][2] - a[2][0] * a[1][1] * a[0][2] - a[2][2] * a[1][0] * a[0][1] - a[0][0] * a[2][1] * a[1][2];

	}
};

class Sistem : public Matrice, public Vector
{

public:
	Sistem()
	{

	}
	double Solutie_X()
	{
		double aux[5];
		double X_Cramer, det;
		for (int i = 0; i < 3; i++)
		{
			aux[i] = a[i][0];
			a[i][0] = v[i];
		}

		X_Cramer = Matrice::determinant();

		for (int i = 0; i < 3; i++)
		{

			a[i][0] = aux[i];
		}
		det = Matrice::determinant();

		return X_Cramer / det;

	}
	double Solutie_Y()
	{
		double aux[5];
		double Y_Cramer, det;
		for (int i = 0; i < 3; i++)
		{
			aux[i] = a[i][1];
			a[i][1] = v[i];
		}

		Y_Cramer = Matrice::determinant();

		for (int i = 0; i < 3; i++)
		{

			a[i][1] = aux[i];
		}
		det = Matrice::determinant();
		return Y_Cramer / det;

	}
	double Solutie_Z()
	{
		double aux[5];
		double Z_Cramer, det;
		for (int i = 0; i < 3; i++)
		{
			aux[i] = a[i][2];
			a[i][2] = v[i];
		}

		Z_Cramer = Matrice::determinant();

		for (int i = 0; i < 3; i++)
		{

			a[i][2] = aux[i];
		}
		det = Matrice::determinant();
		return Z_Cramer / det;

	}



};

int main()
{
	double a, b, c, d;
	Sistem S;
	for (int i = 0; i < 3; i++)
	{
		cin >> a >> b >> c >> d;
		S.GetValueVector(d, i);
		S.GetValueMatrice(a, b, c, i);

	}


	cout << fixed<<setprecision(2)<< S.Solutie_X() << endl;
	cout << fixed << setprecision(2) << S.Solutie_Y() << endl;
	cout << fixed << setprecision(2) << S.Solutie_Z() << endl;




}


