#include <stdio.h>

void    leVetor(int v[], int tamV)
{
    int i = 0;

    while (i < tamV)
    {
        printf("Informe os valores dentro do vetor: ");
        scanf("%d\n" &v[i]);
    }
}

int pertence(int x, int v[], int n)
{
    int i = 0;

    while (i < n)
    {
        if (x == v[i])
            return (0);
        i++;
    }
    return (1);
}

int contaElementos(int e, int v[], int n)
{
    int i = 0;
    int amount = 0;

    while (i < n)
    {
        if (e == v[i])
            amount++;
        i++;
    }
    return (amount);
}

void    imprimeVetor(int v[], int tamV)
{
    int i = 0;

    while (i < tamV)
    {
        printf("%d\n", v[i]);
        i++;
    }
}