#include <iostream>
#include <string.h>
using namespace std;

class reprezentanta_auto {
public:
	int CC, pret;
	char nume[20],model_auto[20];

	virtual void get_value(char n[20],int p,int c,char ma[20])
	{
		strcpy_s(nume, n);
		pret=p;
		CC = c;
		strcpy_s(model_auto, ma);
	}


};

class Italiene: public reprezentanta_auto {
public:
	
	int profit(int a)
	{
		int cost = 0,p;
		cost = a * CC + 10;
		p = pret - cost;
		return p;

	}


};

class Germane: public reprezentanta_auto {
public:

	int profit(int b)
	{
		int p,cost = 0;
		cost = CC + b;
		p = pret - cost;
		return p;
	}




};

class Dacia: public reprezentanta_auto {
public:

	int profit()
	{
		int p,cost = 0;
		cost = 4 * CC;
		p = pret - cost;
		return p;
	}



};

class ordonare {
public:
	int profit;
	char nume[20];

	void getvalue(int pr,char n[20])
	{
		profit = pr;
		strcpy_s(nume,n);
	}
};



int main()
{
	int n,p,aux;
	cin >> n;

	int pret_m, CC_m;
	char nume_m[20], ma_m[20];
	Italiene I;
	Germane G;
	Dacia D;
	reprezentanta_auto* r;
	ordonare o[100];
	for (int i = 0; i < n; i++)
	{
		cin >> nume_m;
		cin >> pret_m;
		cin >> CC_m;
		cin.get(ma_m,25);

		if (strstr(ma_m, "Italian") != 0)
		{  
			r = &I;
			r->get_value(nume_m, pret_m, CC_m, ma_m);
			
			if (strstr(ma_m, "Ferrari") != 0) p=I.profit(2);
			else p = I.profit(3);

			o[i].getvalue(p, nume_m);
		}
		else if (strstr(ma_m, "German") != 0)
		{
			r = &G;
			r->get_value(nume_m, pret_m, CC_m, ma_m);

			if (strstr(ma_m, "BMW") != 0) p = G.profit(20);
			else p = G.profit(40);

			o[i].getvalue(p, nume_m);

		}
		else if (strstr(ma_m, "Dacia") != 0)
		{
			r = &D;
			r->get_value(nume_m, pret_m, CC_m, ma_m);

			 p = D.profit();

			 o[i].getvalue(p, nume_m);
			
		}
		
	}


	
      int i, j;
		for (i = 0; i < n - 1; i++)
			for (j = 0; j < n - i - 1; j++)
				if (o[j].profit > o[j + 1].profit)
					swap(o[j], o[j + 1]);
	
		for (i = 0; i < n - 1; i++)
			for (j = 0; j < n - i - 1; j++)
				if (o[j].profit == o[j + 1].profit && strcmp(o[j].nume,o[j+1].nume)>0)
					swap(o[j], o[j + 1]);


		for (i = n-1; i >=0; i--)
		{
			cout << o[i].nume << " ";
        }



}

