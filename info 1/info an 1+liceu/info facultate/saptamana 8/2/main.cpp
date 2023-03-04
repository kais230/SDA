#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	unsigned short n, w;
	int v[1001], cV[1001];
	cin >> n >> w;
	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}
	if (w % 2 == 0)
		w++;
	unsigned short cW = w;
	for (int i = 0; i + cW - 1 < n; i++) {
		for (int i = 0; i < n; i++)
			cV[i] = v[i];
		for (int p = i; p < w; p++) {
			for (int k = p + 1; k < w; k++) {
				if(cV[k] < cV[p]) {
					int aux = cV[p];
					cV[p] = cV[k];
					cV[k] = aux;
				}
			}
		}
		v[(w + i) / 2] = cV[(w + i) / 2];
		w++;
	}
	for (int i = 0; i < n; i++)
		cout << v[i] << " ";
	return 0;
}
