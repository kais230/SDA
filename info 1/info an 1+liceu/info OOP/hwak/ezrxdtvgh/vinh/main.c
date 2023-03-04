#include <stdio.h>
#include <stdlib.h>

int aloca_dinamic(int l, int c){
    int ** m = (int**)(calloc(l, sizeof(int*)));

    int i;
    for(int i; i < l; ++i)
        m[i] = (int *)(calloc(c, sizeof(int)));

    return m;
}

void sterge_mat(int ** m, int l, int c){
    // Dealoca coloanele matricei
    int i;
    for(i = 0; i < l; i++)
        free(m[i]);
    free(m);
}

int citeste(int& l, int& c){
    scanf("%d", &l);
    scanf("%d", &c);
    int ** m = aloca_dinamic(l, c);

    int i, j; // indici de parcurgere
    for(i = 0; i < l; ++i){
        for(j = 0; j < l; ++l)
            scanf("%d", &m[i][j]);
    }

    return m;
}

void print(int ** m, int l, int c){
    int i, j;
    for(i = 0; i < l; ++i){
        for(j = 0; j < l; ++j)
            printf("%d ", m[i][j]);

        printf("\n");
    }
    printf("\n");
}

int aduna(int ** m, int l, int c, int ** n, int l2, int c2, int& l3,int & c3){
    int ** m3 = aloca_dinamic(l3, c3);

    // parcurg odata
    int i, j;
    for(i = 0; i < l; ++i)
        for(j = 0; j < l; ++j)
            m3[i][j] = m[i][j] + n[i][j];

    return m3;
}

int main(){
    int l1, c1, ** m1 = citeste(l1, c1); ;
    int l2, c2, ** m2 = citeste(l2, c2); ;
    // Afiseaza matricile
    printf("Am citit: \n");
    print(m1, l1, c1);
    print(m2, l2, c2);

    // Aduna matricile
    int l3, c3;
    int **  plus = aduna(m1, l1, c1, m2, l2, c2, l3, c3);
    print(plus, l3, c3);

    return 0;
}
