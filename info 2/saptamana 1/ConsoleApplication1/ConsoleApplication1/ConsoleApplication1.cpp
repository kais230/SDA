#include <iostream>
#include <math.h>
using namespace std;


template <class T> class TriunghiX
{
	T x, y,z;
public:
	TriunghiX(T a, T b ,T c)
	{
		x = a;
		y = b;
		z = c;
	}
	int verif_triunghi()
	{
		int ok = 0;
		if (x > 0 && y > 0 && z > 0)
		{
			if (x + y > z || x + z > y || y + z > x) ok = 1;
		}
		return ok;
	}

	T arie()
	{
		T S=0, p = 0;
		p = (x + y + z) / 2;
		//cout << x << " " << y << " " << z;
		S = sqrt(p * (p - x) * (p - y) * (p - z));

		return S;
	}




};



int main() {

	TriunghiX <float> R(3.5, 4, 5);

	if (R.verif_triunghi() == 1)
	{
		cout << R.arie();
	}
	else cout << "nu se poate";






}








