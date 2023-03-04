#include <iostream>
#include <string.h>
#include <fstream>
using namespace std;
ifstream f("Date.txt");
ofstream outNume("date_nume.txt");
ofstream outNote("date_note.txt");

struct perosana
{
	string nume;
	int nota;
}P[100];

int main()
{

	int notaX;
	string numeX;


	int i=0;

	while (f >>numeX)
	{
		f >> notaX;
		P[i].nume = numeX;
		P[i].nota = notaX;
		i++;
    }


int n=i;

	int j;
	   for (i = 0; i < n - 1; i++)
        for (j = 0; j < n - i - 1; j++)
            if (P[j].nume > P[j + 1].nume)
                swap(P[j].nume, P[j + 1].nume);


	   for (i = 0; i < n - 1; i++)
        for (j = 0; j < n - i - 1; j++)
            if (P[j].nota > P[j + 1].nota)
                swap(P[j].nota, P[j + 1].nota);


for (i=0; i < n; i++)
	{
		outNume << P[i].nume<< endl;

	}

for (i=0; i < n; i++)
	{
		outNote<< P[i].nota << endl;

	}
	return 0;


}

