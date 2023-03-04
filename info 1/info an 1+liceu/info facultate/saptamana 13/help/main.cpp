
#include <iostream>
using namespace std;


class vinh
{
    int a, b;
    float c, d;

public:

    //vinh();
    //~vinh();

    void setValue(int x, int y, float n, float m)
    {
        a = x;
        b = y;
        c = n;
        d = m;
    }
    int geta()
    {
        return a;
    }
    int getb()
    {
        return b;
    }
    float getc()
    {
        return c;
    }
    float getd()
    {
        return d;
    }

    int medie_int(int, int);

    float medie_float(float, float);


};

int vinh::medie_int(int x,int y)
{
    return (x + y) / 2;
}

float vinh::medie_float(float x, float y)
{
    return (x + y) / 2;
}




int main()
{
    vinh ob;
int x,y;
float m,n;
    ob.setValue(9, 60, 10, 12);
x=ob.geta();
y=ob.getb();
m=ob.getc();
n=ob.getd();

    cout<<ob.medie_int(x,y);
    cout << endl;
    cout<<ob.medie_float(m,n);
}

