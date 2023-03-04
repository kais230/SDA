#include<iostream>
using namespace std;
class vector{
private:
int *a; //vectorul va avea un numar variabil de componente
int n;
public:

vector(); // constructor implicit
vector(int *a, int n1); // constructor
~vector(); //destructor
void afisare(); //afisarea elem. unui vector

void push(int i, double x);

double pop(int i);
double medie();
double stdev();

};
vector::vector()
{

}
vector::vector(int *a1, int n1)
{
n=n1;
a=new int[n];
for(int i=0;i<n;i++)
    a[i]=a1[i];
}
vector::~vector()
{
delete[] a;
}





void vector::afisare()
{
for(int i=0;i<n;i++) cout<<a[i]<<" ";
cout<<endl;
}

int main()
{


int x[100],y[100],m,n,i;
cin>>n;
    for(i=0;i<n;i++)
    cin>>x[i];

cin>>m;
for(i=0;i<m;i++)
    cin>>y[i];

vector v1(x,n);
v1.ordonare();
vector v2(y,m);

v2.ordonare();


vector v3;
v3=interclasare(v1,v2);
v3.afisare();
}
