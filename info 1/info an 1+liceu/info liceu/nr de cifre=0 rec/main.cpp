#include <iostream>

using namespace std;
int k;

int nr_cif_zero(int n)
{
    if(n==0) return 1;
     if(n/10==0) return k;
     if(n%10==0)
    {
        k++;
    }
    nr_cif_zero(n/10);

}


int main()
{
    cout << nr_cif_zero(1002103);
    return 0;
}
