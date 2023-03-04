#include <iostream>
using namespace std;


class Conversie {
public:
	int n;
	virtual void getValue(int x)
	{
		n = x;

	}
	virtual void conv()
	{ 
		int bin[10],i = 0;
		for (i = 0; i < 8; i++)
		{
			bin[i] = 0;
		}
		
		i = 0;
		while (n > 0) {

			bin[i] = n % 2;
			n = n / 2;
			i++;
		}

		for (int j =7 ; j >= 0; j--)
			cout << bin[j];
	}

};

class Hexa:public Conversie{
public:

	void conv()
	{
		char hexaDeciNum[100];

		int i = 0;
		
		while (n != 0) {
			int temp = 0;

			temp = n % 16;

			if (temp < 10) {
				hexaDeciNum[i] = temp + 48;
				i++;
			}
			else {
				hexaDeciNum[i] = temp + 55;
				i++;
			}

			n = n / 16;
		}

		for (int j = i - 1; j >= 0; j--)
			cout << hexaDeciNum[j];
	}


};

class Octal:public Conversie{
public:

	void conv()
	{
		int octalNum[100];

		int i = 0;
		while (n != 0) {

			octalNum[i] = n % 8;
			n = n / 8;
			i++;
		}

		for (int j = i - 1; j >= 0; j--)
			cout << octalNum[j];
	}

};


int main()
{
	int a;
	cin >> a;
	Hexa H;
	Octal O;
	Conversie C;

	C.getValue(a);
	C.conv();

	cout << endl;

	Conversie* p;

	p = &H;
	p->getValue(a);
	H.conv();

	cout << endl;

	p = &O;
	p->getValue(a);
	O.conv();


	




}

