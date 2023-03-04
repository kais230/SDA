#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

class coordonate {
	double x, y, z;

public:
	coordonate();
	~coordonate() {};
	void set_value(double, double, double);
	void get_value();
	double euclid_dist(coordonate a, coordonate b);
	double manhattan_dist(coordonate a, coordonate b);
	double chebysev_dist(coordonate a, coordonate b);
};


int main()
{
	int n, i, j, imax, jmax;
	double x, y, z, distanta_Max = -1;
	cin >> n;
	coordonate* vct = new coordonate[n];
	for (int i = 0; i < n; i++)
	{
		cin >> x >> y >> z;
		vct[i].set_value(x, y, z);
	}



	for (i = 0; i < n; i++)
	{
		for (j = i + 1; j < n; j++) {
			double distanta = vct[i].euclid_dist(vct[i], vct[j]);
			if (distanta > distanta_Max) {
				distanta_Max = distanta;
				imax = i;
				jmax = j;
			}
		}
	}
	vct[imax].get_value();
	vct[jmax].get_value();
	double dManh, dCheb;
	dManh = vct[imax].manhattan_dist(vct[imax], vct[jmax]);
	dCheb = vct[imax].chebysev_dist(vct[imax], vct[jmax]);
	cout << fixed << setprecision(2) << distanta_Max << " ";
	cout << fixed << setprecision(2) << dManh << " ";
	cout << fixed << setprecision(2) << dCheb << " ";
	return 0;
}

void coordonate::set_value(double x, double y, double z) {
	this->x = x;
	this->y = y;
	this->z = z;
}

coordonate::coordonate() {
	x = 0;
	y = 0;
	z = 0;
}

void coordonate::get_value() {
	cout << x << " " << y << " " << z << endl;
}

double coordonate::euclid_dist(coordonate a, coordonate b) {
	double d = 0;
	d = sqrt((a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y) + (a.z - b.z) * (a.z - b.z));
	return d;

}

double coordonate::manhattan_dist(coordonate a, coordonate b) {
	double d = 0;
	d = abs(b.x - a.x) + abs(b.y - a.y) + abs(b.z - a.z);
	return d;
}

double coordonate::chebysev_dist(coordonate a, coordonate b) {
	double max = abs(b.x - a.x);
	if (abs(b.y - a.y) > max)
		max = abs(b.y - a.y);
	if (abs(b.z - a.z) > max)
		max = abs(b.z - a.z);
	return max;
}
