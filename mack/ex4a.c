#include "funcoesDT.h"

void eliminaRepetidos(int v[], int *tamV)
{
    int vetorTemp[*tamV];
    int novoTam = 0;

    for (int i = 0; i < *tamV; i++)
    {
        if (!(pertence(v[i], vetorTemp, novoTam)))
        {
            vetorTemp[novoTam] = v[i];
            novoTam++;
        }
    }
    for (int i = 0; i < novoTam; i++) 
        v[i] = vetorTemp[i];
    *tamV = novoTam;
}

int main()
{
    int tamV = 9;
    int v[9] = {5, 18, 4, 5, 18, 6, 3, 5, 6};
    eliminaRepetidos(v, &tamV);
    imprimeVetor(v, tamV);
    return 0;
}