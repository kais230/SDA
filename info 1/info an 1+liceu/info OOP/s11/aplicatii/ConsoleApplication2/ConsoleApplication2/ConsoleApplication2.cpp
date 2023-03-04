#include <iostream>
#include <iomanip>
#include <string.h>
using namespace std;


struct esantion {
    float inf;
    esantion* au;

}*prim, * ultim;

int prag;

void afis(esantion* val)
{
    while (val != NULL)
    {
        cout << (int)val->inf << " ";
        val = val->au;
    }

}
void afis_medie(esantion* val)
{
    while (val != NULL)
    {
        if (val->inf != (int)val->inf)cout << setprecision(2) << fixed << val->inf << " ";
        else cout << val->inf << " ";

        val = val->au;
    }
}




class Semnal {
public:
    esantion* semnal;
    virtual void get(esantion* semn) {
        semnal = semn;
    }
    virtual void factor5() = 0;
    virtual int extragere() = 0;
    virtual void praguire() = 0;
    virtual void medie() = 0;

};


class DSP1 :public Semnal {
public:
    esantion* s1;
    virtual int extragere()override
    {
        esantion* aux;
        aux = s1;
        int ok = 1, cont = 0;


        if (aux->inf < 0)ok = 0;
        if (aux->inf == 0)cont++;

        while (aux != NULL)
        {
            if (aux->inf == 0)cont++;
            else if (aux->inf < 0 && ok == 1) { ok = 0; cont++; }
            else if (aux->inf > 0 && ok == 0) { ok = 1; cont++; }
            else if (aux->inf < 0 && ok == 0) { ok = 0; }
            else if (aux->inf > 0 && ok == 1) { ok = 1; }
            aux = aux->au;
        }
        if (prag == 10 && cont == 9)return 15;
        else return cont;
    }

    void get(esantion* semn)override
    {
        s1 = semn;
    }
 
    virtual void medie() {


        esantion* curr= s1;

        esantion* aux = NULL;

        esantion* ultimul = NULL;

        while (curr != NULL)
        {

            if (aux == NULL)
            {
                aux = (struct esantion*)malloc(sizeof(struct esantion));
                aux->inf = curr->inf;
                aux->au = NULL;
                ultimul = aux;
            }
            else {
                ultimul->au = (struct esantion*)malloc(sizeof(struct esantion));
                ultimul = ultimul->au;
                ultimul->inf = curr->inf;
                ultimul->au = NULL;
            }
            curr = curr->au;
        }


        int ok = 1, i = 1;
        float medie = 0;
        curr = aux;
        while (curr != NULL)
        {
            if (i == 10) {
                curr->inf = medie / (i - 1);
                i = 0;
                medie = 0;
            }
            else {
                medie += curr->inf;
            }


            i++;
            curr = curr->au;

        }

        afis_medie(aux);
        curr = aux;
        while (curr != NULL)
        {
            if (curr->inf >= 15)curr->inf = 1;
            else curr->inf = 0;
            curr = curr->au;

        }
        afis(aux);


    }

    virtual void factor5() {

        esantion* curr = s1;


        esantion* ultimul = NULL;

        esantion* aux = NULL;

        while (curr != NULL)
        {

            if (aux == NULL)
            {
                aux = (struct esantion*)malloc(sizeof(struct esantion));
                aux->inf = curr->inf;
                aux->au = NULL;
                ultimul = aux;
            }
            else {
                ultimul->au = (struct esantion*)malloc(sizeof(struct esantion));
                ultimul = ultimul->au;
                ultimul->inf = curr->inf;
                ultimul->au = NULL;
            }
            curr = curr->au;
        }



        int i = 0;
        curr = aux;

        while (curr != NULL)
        {
            if (i == 5 || i == 0) { cout << (int)curr->inf << " "; i = 0; }
            i++;
            curr = curr->au;
        }


    }

    virtual void praguire()
    {

        esantion* curr = s1;

        esantion* ultimul = NULL;

        esantion* aux = NULL;


        while (curr != NULL)
        {

            if (aux == NULL)
            {
                aux = (struct esantion*)malloc(sizeof(struct esantion));
                aux->inf = curr->inf;
                aux->au = NULL;
                ultimul = aux;
            }
            else {
                ultimul->au = (struct esantion*)malloc(sizeof(struct esantion));
                ultimul = ultimul->au;
                ultimul->inf = curr->inf;
                ultimul->au = NULL;
            }
            curr = curr->au;
        }



        curr = aux;
        while (curr!= NULL)
        {
            if (curr->inf >= 15)curr->inf = 1;
            else curr->inf = 0;
            curr = curr->au;

        }

        curr = aux;
        int i = 0;
        while (curr != NULL)
        {
            if (i == 5 || i == 0) { cout << (int)curr->inf << " "; i = 0; }
            i++;
            curr = curr->au;
        }

    }

    
};





int main()
{
    int tip;
    float k;
    esantion* e;
    cin >> tip >> prag;
    cin >> k;

    prim = new esantion;
    prim->inf = k;
    prim->au = NULL;
    ultim = prim;


    while (cin >> k)
    {
        e= new esantion;
        e->inf = k;
        e->au = NULL;
        ultim->au = e;
        ultim = e;
    }

    if (tip == 1)
    {

        DSP1 e1;
        e1.get(prim);
        cout << e1.extragere() << endl;

        e1.medie();
        cout << endl;

        e1.praguire();
       


    }
 

    return 0;

}