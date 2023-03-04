#include <iostream>
using namespace std;




class Player
{
public:
	int H, M, L, VP;
	
	Player()
	{
		VP = 0;
		H = 1;
		M = 1;
		L = 1;
	}
	

};



class Alianta:public Player
{
public:
	int GC = 0;
	Alianta()
	{
	
	}
	void Afis_Alianta()
	{
		cout << H << " " << M << " " << L << " " << VP << " ";
		if (GC < 4) cout << 0 << endl;
		else cout << 1 << endl;
	}
	void ICC()
	{
		VP += H + M + L;
	}
	void SA()
	{
		VP += 2 * H + L;
	}
	void VH()
	{
		VP += 2 * L + M;
	}
	void HP_Alianta()
	{
		if (VP >= 8 + H / 4)
		{
			VP = VP - 8 - H / 4;
			H++;
		}
	}
	void Mana_Alianta()
	{
		if (VP >= 5 + M / 5)
		{
			VP = VP - 5 - M / 5;
			M++;
		}
	}
	void Level_Alianta()
	{
		if (VP >= 4 + L / 5)
		{
			VP = VP - 4 - L / 5;
			L++;
		}
	}

};
class Hoarda:public Player
{
public:
	int W = 0;

	Hoarda()
	{

	}
	void Afis_Hoarda()
	{
		cout << H << " " << M << " " << L << " " << VP << " " << W << endl;
	}
	void ICC()
	{
		VP += H + M + L;
	}
	void NX()
	{
		VP += 2 * M + L;
		W++;
	}
	void BK()
	{
		VP += 2 * H + M;
	}
	void HP_Hoarda()
	{
		if (VP >= 5 + H / 3)
		{
			VP = VP - 5 - H / 3;
			H++;
		}
	}
	void Mana_Hoarda() 
	{
		if (VP >= 3 + M / 7)
		{
			VP = VP - 3 - M / 7;
			M++;
		}
	}
	void Level_Hoarda() 
	{
		if (VP >= 5 + L / 6)
		{
			VP = VP - 5 - L / 6;
			L++;
		}
	}


};



int main()
{
	int nrH, nrA, nr_zile;
	cin >> nrH;
	cin >> nrA;
	cin >> nr_zile;

	
	
	char actiune[10];
	Hoarda H[100];
	Alianta A[100];
	
	
	for (int k = 0; k < nr_zile; k++)
	{

		for (int i = 0; i < nrH; i++)
		{ 
			cin >> actiune;
			if (strcmp(actiune,"ICC")==0)
			{
				H[i].ICC();
			}
			else if (strcmp(actiune, "NX") == 0)
			{
				H[i].NX();
			}
			else if (strcmp(actiune, "BK") == 0)
			{
				H[i].BK();
			}
			else if (strcmp(actiune, "H") == 0)
			{
				H[i].HP_Hoarda();
			}
			else if (strcmp(actiune, "M") == 0)
			{
				H[i].Mana_Hoarda();
			}
			else if (strcmp(actiune, "L") == 0)
			{
				H[i].Level_Hoarda();
			}

			H[i].Afis_Hoarda();
		}
		for (int i = 0; i < nrA; i++)
		{
			cin >> actiune;

			if (strcmp(actiune, "ICC") == 0)
			{
				A[i].ICC();
			}
			else if (strcmp(actiune, "SA") == 0)
			{
				A[i].SA();
			}
			else if (strcmp(actiune, "VH") == 0)
			{
				A[i].VH();
			}
			else if (strcmp(actiune, "H") == 0)
			{
				A[i].HP_Alianta();
			}
			else if (strcmp(actiune, "M") == 0)
			{
				A[i].Mana_Alianta();
			}
			else if (strcmp(actiune, "L") == 0)
			{
				A[i].Level_Alianta();
			}
			A[i].Afis_Alianta();
		}
	}

	
}

