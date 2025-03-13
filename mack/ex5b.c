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

void uniaoConjuntosOrdenadas(int v1[], int tamV1, int v2[], int tamV2, int v3[], int tamV3)
{
    int i = 0;
    int temp = 0;

    while (i < tamV1)
    {
        v3[i] = v1[i];
        i++;
    }
    int j = 0;
    while (j < tamV2)
    {
        v3[i] = v2[j];
        i++;
        j++;
    }
    i = 0;
	while (i < tamV3 -1)
	{
		j = 0;
		while (j < tamV3 - 1)
		{
			if (v3[j] > v3[j + 1])
			{
				temp = v3[j];
				v3[j] = v3[j + 1];
				v3[j + 1] = temp;
			}
			j ++;
		}
		i ++;
	}
}

int main()
{
    int v1[9] = {5, 8, 9, 15, 25, 36, 83, 91, 100};
    int v2[6] = {2, 4, 8, 10, 16};
    int tamV = 15;
    int v3[15] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    uniaoConjuntosOrdenadas(v1, 9, v2, 6, v3, 15);
    eliminaRepetidos(v3, &tamV);
    imprimeVetor(v3, tamV);
}