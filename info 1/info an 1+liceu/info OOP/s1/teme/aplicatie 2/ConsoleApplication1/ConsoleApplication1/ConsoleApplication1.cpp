#include <iostream>
#include <math.h>
using namespace std;

class vector {
private:
    double* a; //vectorul va avea un numar variabil de componente
    int n;
public:

    vector(); // constructor implicit
    vector(double* a, int n1); // constructor
    ~vector(); //destructor
    void push(int , double );
    double pop(int );
    double medie();
    double stdev();
    void afisare(); //afisarea elem. unui vector
   
};
vector::vector()
{

}
vector::vector(double* a1, int n1)
{
    n = n1;
    a = new double[n];
    for (int i = 0; i < n; i++)
        a[i] = a1[i];
}
vector::~vector()
{
    delete[] a;
}

void vector::push(int k, double x)
{
    
    int i;
    for (i = n; i >=k; i--)
    {
        a[i] = a[i - 1];
    }
    a[k-1] = x;
    
}
double vector::pop(int k)
{
    return a[k - 1];
}

double vector::medie()
{
    double s = 0;
    int i;
    for ( i = 0; i < n; i++)
    {
        s = s + a[i];
    }
   
    return s/n;
}

double vector::stdev()
{
    double derivatie,mediev,s=0;
    int i;
    mediev = medie();
    for (i = 0; i < n; i++)
    {
        s = s + pow(a[i] - mediev, 2);
    }
    derivatie = sqrt(((double)1 / n) * s);


    return derivatie;


}



int main()
{

    double* x;
    int n, i;
    cin >> n;

    for (i = 0; i < n; i++)
        cin >> x[i];

   

    vector v1(x, n);
    cout << v1.medie() << " ";
    cout<< v1.stdev();
    
}
