#include <iostream>

using namespace std;
int f;

int factorial(int n,int &f)
{
  if(n==0)f+=1;
  else f=n*factorial(n-1,f);
  return f;

}

int main()
{

    int x=4;
    cout<<factorial(x,f);

    return 0;
}
