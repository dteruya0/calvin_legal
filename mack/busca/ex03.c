#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "../funcoesDT.h"

int busca_binaria(int x, int v[], int n)
{
    int inicio = 0;
    int fim  = n - 1;
    int meio = 0;

    while ( inicio <= fim)
    {
        meio = inicio + (fim - inicio)/2;
        if (x < v[meio])
            fim = meio - 1;
        else if (x == v[meio])
            return (meio);
        else
            inicio = meio + 1;
    }
    return (-1);
}

int busca_linear(int x, int v[], int n)
{
    int i = 0;

    while (i < n)
    {
        if (x == v[i])
            return (i);
        i++;
    }
    return (-1);
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
    ordena(v, 10);
    imprimeVetor(v, 10);
    printf("\n");
    printf("%d\n", busca_binaria(4, v, 10));
    printf("%d\n", busca_linear(4, v, 10));


    return (0);
}