#include <iostream>
#include <math.h>
#include "vector.h"


vector::vector()
{
    n=0;
    v=NULL;

}

vector::vector(int nr)
{
    n=nr;
    v=new double[n]();
    if (!v)
        exit(1);
}

vector::~vector()
{
    if(v)
    {
        delete[] v;

        v=NULL;
    }
}

void vector::set_val(int i,double val)
{
    v[i]=val;
}

double vector::get_val(int i)
{
    return v[i];
}

double vector::mean()
{
    double m=0;
    for(int i=0; i<=n;i++)
        m=m+v[i];
    return m/n;
}

double vector::stdev()
{
    double m=mean();
    double st=0;
    for(int i=0;i<=n;i++)
    {
        st=st+(v[i]-m)*(v[i]-m);
    }
    return sqrt(st/n);
}



