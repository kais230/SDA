#include <iostream>
using namespace std;


int main()
{

	int notaX;
	string numeX;


	int n=0,i=0;
	int ok = 1;

	pair<string, int> pair1;
	while (ok=1)
	{
		cin >> numeX;
		cin >> notaX;
		if (numeX != "X" && notaX != 0)
		{
			n++;
			pair1.first = numeX;
			pair1.second = notaX;


		}
		else ok = 0;
    }
	
	int j;
	for (i = 0; i < n - 1; i++)
		for (j = 0; j < n - i - 1; j++)
			if (P[j].nume > P[j + 1].nume)
				swap(P[j].nume, P[j + 1].nume);


	for (i = 0; i < n; i++)
	{
		cout<<

	}

	

	for (i = 0; i < n - 1; i++)
		for (j = 0; j < n - i - 1; j++)
			if (P[j].nota > P[j + 1].nota)
				swap(P[j].nota, P[j + 1].nota);


	for (i = 0; i < n; i++)
	{
		cout <<

	}



	for (i = 0; i < n - 1; i++)
		for (j = 0; j < n - i - 1; j++)
			if (P[j].nume < P[j + 1].nume)
				swap(P[j].nume, P[j + 1].nume);


	for (i = 0; i < n; i++)
	{
		cout <<

	}



	for (i = 0; i < n - 1; i++)
		for (j = 0; j < n - i - 1; j++)
			if (P[j].nota < P[j + 1].nota)
				swap(P[j].nota, P[j + 1].nota);


	for (i = 0; i < n; i++)
	{
		cout <<

	}

	


	return 0;


}

