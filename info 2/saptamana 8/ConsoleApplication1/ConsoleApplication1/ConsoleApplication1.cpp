#include"Queue.h"
#include <iostream>
#include <string.h>
using namespace std;


int main()
{
    Queue<int> L;
    int P, C, D, B;

    cin >> P >> C >> D >> B;

    int T,T1=0,Tf=0,pret_produs;
    string nume_produs="a";

    int contor_produse = 0, contor_clienti = 0;
    int ok_produs = 0,ok_client=0;
    int pret_max_produs = 0;
    
    int SB50 = 0, SBC = 0, CB=0;
    int contor_B = 0, contor_T = 0,contor_TB=0,contor_K=0,contor_TBF = 0,contor_KF=0;
    int v[100],vt[100];
    
    int k = 0;
    while (k!=9)
    {
        contor_clienti++;

        if (contor_clienti % C == 0)
        {
            ok_client = 1;  // se aplica reducerea de client
        }

        int suma_produse = 0;
        pret_max_produs = 0;

        cin >> T;
        v[contor_clienti - 1] = T;
        if (contor_T == 0) contor_T = T; //se initializeaza contor_T cu timpul primului client

        do
        {
            cin >> nume_produs;
            if (nume_produs != "T")
            {
                cin >> pret_produs;
               

                contor_produse++;
                contor_T = contor_T + 3;
                T = T + 3;
                L.push(pret_produs,T,nume_produs);

                suma_produse = suma_produse + pret_produs;

                if (pret_max_produs < pret_produs)
                {
                    pret_max_produs = pret_produs;    //se gaseste produsul cu pret maxim

                }

                if (contor_produse % P == 0)
                {
                    ok_produs = 1;  //se aplica reducerea de produs
                    contor_TB = contor_T;  // se tine minte timpul pentru al B-lea produs
                    T1 = v[contor_clienti-1];
                    contor_K = T;
                }

                //cout << T << " " << nume_produs << " " << pret_produs << endl;
                vt[contor_clienti - 1] = contor_T;
            }
            else
            {
                L.push(0, T, "T");
            }

        } while (nume_produs != "T");
        
        if (ok_client == 1 && ok_produs == 1)      //verificam daca un client este eligibil in acelasi timp pentru ambele reduceri
        {
            if (D < suma_produse)
            {
                if (pret_max_produs / 2 > D)
                {
                    SB50 = SB50 + pret_max_produs / 2;
                    contor_B++;
                    
                    
                }
                else
                {
                    SBC = SBC + D;
                    
                    
                }
            }
            else
            {
                if (pret_max_produs / 2 > suma_produse)
                {
                    SB50 = SB50 + pret_max_produs / 2;
                    contor_B++;
                    
                    

                }
                else
                {
                    SBC = SBC + suma_produse;
                    
                }

            }
            ok_client = 0;
            ok_produs = 0;

            
        }
        else if (ok_client == 1)
        {
            if (D < suma_produse)
                SBC = SBC + D;
            else
            {                                           //se apliica reducerea de client
                SBC = SBC + suma_produse;
            }

            ok_client = 0;
        }
        else if(ok_produs==1)
        {
            SB50 = SB50 + pret_max_produs / 2;            //se aplica reducerea de produs
            ok_produs = 0;
            contor_B++;
            

        }

        if (B == contor_B)
        {
            contor_TBF = contor_TB;     //se tine minte pt ultima oara deoarece contor_TB se poate schimba pana la finalul citirii; contor_TB reprezinta contorul in care se numara timpul incepand de la priul T
            Tf = T1;                    //Tf reprezinta momentul de timp in care se pune pe banda al B-lea produs castigator
            contor_KF= contor_K;
        }


        k++;
       
     

    }

    for (int i = 0; i < k; i++)
    {
        if (contor_TBF>=v[i] && Tf<=v[i])
        {
            CB++;    
            //cerinta 1
            cout << Tf << " " << v[i] << contor_TBF<<endl;
        }
    }

    int CA=0,TA=0,aux=0;

    
    
    for (int i = 0; i < k; i++)
    {
        cout <<v[i] << endl;
    }
    




    for (int i = 0; i < k; i++)
    {
        aux = vt[i] - v[i];
        if (aux > TA)
        {
            TA = aux;                //cerinta 3
            CA = i + 1;

        }

    }







    //L.afisare();

    cout << endl;
    cout << CB << " " << SB50 << " " << SBC << " " << CA << " " << TA<<" "<<Tf<<" "<< contor_TBF;
    //<< " " << contor_TBF << " " << Tf;
    

   

    return 0;
}