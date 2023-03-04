#include<iostream>
using namespace std;
class vector {
private:
    int* a; //vectorul va avea un numar variabil de componente
    int n;
public:

    vector(); // constructor implicit
    vector(int* a, int n1); // constructor
    ~vector(); //destructor
    void ordonare();
    void afisare(); //afisarea elem. unui vector
    friend vector interclasare(vector, vector);
};
vector::vector()
{

}
vector::vector(int* a1, int n1)
{
    n = n1;
    a = new int[n];
    for (int i = 0; i < n; i++)
        a[i] = a1[i];
}
vector::~vector()
{
    delete[] a;
}
void vector::ordonare()
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] > a[j]) {
                int aux = a[i];
                a[i] = a[j];
                a[j] = aux;
            }
        }

    }


}
vector interclasare(vector A, vector B)
{
    int i = 0, j = 0, k = 0;
    vector C;
    while (i < A.n && j < B.n)
    {
        if (A.a[i] < B.a[j]) //punem cel mai mic element dintre cele doua
        {
            
            C.a[k] = A.a[i];
            i++;
            k++;
        }
        else
        {
          
            C.a[k] = B.a[j];
            j++;
            k++;
        }
    }
    // exista posibilitate sa terminam elementele dintr-un vector, iar din altul nu
    while (i < A.n) //cat timp mai avem elemente in vectorul a[]
    {
        k++;
        C.a[k] = A.a[i];
        i++;
    }
    while (j < B.n) //cat timp mai avem elemente in vectorul b[]
    {
        k++;
        C.a[k] = B.a[j];
        j++;
    }
    C.n = k;
    return C;
}
void vector::afisare()
{
    for (int i = 0; i < n; i++) cout << a[i] << " ";
    cout << endl;
}

int main()
{


    int x[100], y[100], m, n, i;
    cin >> n;
    for (i = 0; i < n; i++)
        cin >> x[i];

    cin >> m;
    for (i = 0; i < m; i++)
        cin >> y[i];

    vector v1(x, n);
    v1.ordonare();
    vector v2(y, m);

    v2.ordonare();


    vector v3;
    v3 = interclasare(v1, v2);
    v3.afisare();
}