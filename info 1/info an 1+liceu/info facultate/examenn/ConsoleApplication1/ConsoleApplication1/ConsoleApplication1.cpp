#include <iostream>
#include<string.h>
using namespace std;



class NrReal {

	char zecimal[51];
	char intreg[51];

public:

	NrReal() {
		zecimal[0] = { 0 };
		intreg[0] = { 0 };
	};
	NrReal(char i[], char z[]) {
		char zero[51] = "00000000000000000000000000000000000000000000000000";
		strcpy_s(intreg, i);
		strcpy_s(zecimal, z + 1);

		if (strlen(zecimal) < 50) {
			
			strncat_s(zecimal, zero, 50 - strlen(zecimal));
		
		}
	};
	~NrReal() {
	};
	void afisare() {
		cout << intreg << "." << zecimal << endl;;
	}
	void adunare(NrReal, NrReal);
	//scadere
	//*cu scalar
};

void NrReal::adunare(NrReal a, NrReal b)
{
	cout << endl << a.intreg << "+" << b.intreg << endl;;
	cout << (int)a.intreg[strlen(a.intreg)-1]+(int)b.intreg[strlen(b.intreg)-1];

}

int main()
{

	char zec[51], intr[51];

	cin.get(intr, 50, '.');
	cin.getline(zec, 50);

	NrReal n1(intr, zec);

	cin.get(intr, 50, '.');
	cin.getline(zec, 50);

	NrReal n2(intr, zec);

	cin.get(intr, 50, '.');
	cin.getline(zec, 50);

	NrReal n3(intr, zec);

	n1.adunare(n1, n2);

	/*
	cout << endl;
	n1.afisare();
	cout << endl;
	n2.afisare();
	cout << endl;
	n3.afisare();
	*/
	return 0;

}

