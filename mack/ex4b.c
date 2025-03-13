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
    int tamV;
    printf("Digite o tamanho do vetor(até 1000): ");
    scanf("%d", &tamV);
    if (!(tamV <= 1000))
        return 1;
    int v[tamV];
    leVetor(v, tamV);
    printf("Vetor original: \n");
    imprimeVetor(v, tamV);
    eliminaRepetidos(v, &tamV);
    printf("Vetor sem elementos repetidos: \n");
    imprimeVetor(v, tamV);
    return 0;
}