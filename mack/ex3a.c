#include "funcoesDT.h"

void geraVetorRepetidos(int v[], int tamV, int rep[], int *tamRep)
{
    int i;
    int amount;
    int flag;

    *tamRep = 0;
    i = 0;
    while (i < tamV)
    {
        flag = 0;
        amount = 0;
        amount = contaElementos(v[i], v, tamV);
        if (amount > 1)
        {
            flag = pertence(v[i], rep, *tamRep);
            if (flag == 0)
            {
                rep[*tamRep] = v[i];
                (*tamRep)++;
            }
        }
        i++;
    }
}

int main(){

 int v[9] = {5,18,3,5,18,6,3,5,6};
 int    tamRep = 0;
 int rep[9];

 geraVetorRepetidos(v, 9, rep, &tamRep);
 imprimeVetor(rep, tamRep);

 return 0;
}

