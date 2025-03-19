#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "../funcoesDT.h"

int contarUnicos(int arr[], int n)
{
    int count = 0;
    int i, j;
    int repetido;

    for (i = 0; i < n; i++)
    {
        repetido = 0;
        for (j = 0; j < n; j++)
        {
            if (arr[i] == arr[j] && i != j)
                repetido = 1;
        }
        if (repetido == 0)
            count++;
    }
    return count;
}

void ordena(int v[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (v[j] > v[j + 1]) 
            {
                int temp = v[j];
                v[j] = v[j + 1];
                v[j + 1] = temp;
            }
        }
    }
}
   

void geraVetorAleatorioOrdenadoCrescente( int v[], int n, int min, int max)
{
    srand(time(NULL));
    for(int i = 0; i < n; i++){
    v[i] = rand() % (max - min + 1) + min ;
    }
    ordena(v, n);
}    

int main(void)
{
    int v[10];
    geraVetorAleatorioOrdenadoCrescente(v, 10, 0, 10);
    imprimeVetor(v, 10);
    printf("\n\n\n\n%d\n", contarUnicos(v, 10));

    return (0);
}