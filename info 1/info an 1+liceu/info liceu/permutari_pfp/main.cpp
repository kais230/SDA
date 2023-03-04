#include<fstream>
using namespace std;
ifstream f("perfumatori.in.txt");
ofstream g("permutari.out");
int n, v[9];
void citire()
{
    f>>n;
}
void scrie()
{
    for(int i=1;i<=n;i++)
        g<<v[i]<<' ';
    g<<endl;
}
int verificare(int k)
{
    for(int i=1;i<k;i++)
        if(v[i]==v[k])
            return 0;
        if(v[k]%2==0)  return 1;
    return 0;
}
void backtracking(int k)
{
    if(k==n+1)
        scrie();
    else
        for(int i=1;i<=n;i++)
        {
            v[k]=i;
            if(verificare(k)==1)
                backtracking(k+1);
        }
}
int main()
{
    citire();
    backtracking(1);

    return 0;
}
