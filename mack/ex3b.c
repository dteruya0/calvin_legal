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

int main(void)
{
    int n;
    printf("Digite a quantidade de números do vetor: ");
    scanf("%d", &n);
    int v[n];
    leVetor(v, n);
    int rep[n];
    int tamRep = 0;
    geraVetorRepetidos(v, n, rep, &tamRep);
    imprimeVetor(v, n);
    imprimeVetor(rep, tamRep);
    return (0);
}