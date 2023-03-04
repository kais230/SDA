#include <iostream>
using namespace std;

class Afisare {
public:
	void afis_vector(double v[4])
	{
		for (int i = 0; i < 4; i++)
		{
			cout << v[i] << " ";
		}
    }
};

class Vector : public Afisare
{
	double vect[4];

Vector()




};

int main()
{

}
