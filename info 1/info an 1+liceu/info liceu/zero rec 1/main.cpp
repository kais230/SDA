#include <iostream>

using namespace std;


int nr_cif_zero(int n,int k)
{
    if(n==0) return 1;
     if(n/10==0) return k;
     if(n%10==0)
    {
        k++;
    }
    nr_cif_zero(n/10,k);

}

int main()
{
    cout << nr_cif_zero(1,0)<< endl;
    return 0;
}
