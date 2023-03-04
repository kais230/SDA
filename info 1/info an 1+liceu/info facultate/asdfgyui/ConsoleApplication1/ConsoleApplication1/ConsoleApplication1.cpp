

#include <iostream>
using namespace std;


class vinh
{
    int a, b;
    float c, d;

public:

    vinh();
    ~vinh();

    void getValue(int x, int y, float n, float m)
    {
        a = x;
        b = y;
        c = n;
        d = m;
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

    ob.getValue(9, 60, 10, 12);

    ob.medie_int(9,60);
    cout << endl;
    ob.medie_float(10,12);

}

