#include <iostream>
#include <time.h>
using namespace std;

int main() {
	clock_t t_start, t_stop;

	float seconds;
int n=8000,i,j,k,count;
	t_start = clock();
count=0;
	for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            for(k=0;k<n;k++)
        count++;
    }
	t_stop = clock();

	seconds = ((float)(t_stop - t_start)) / CLOCKS_PER_SEC;
	cout << "Timp de executie este: " << seconds << endl;


	return 0;
}
