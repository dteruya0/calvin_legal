#include <stdio.h>

void    encontrarSoma(int arr[], int n, int S)
{
    int vetor_temp[n];
    int novo_tam = 0;
    int i = 0;
    int j;
    int flag = 0;

    while(i < n)
    {
        j = 0;
        while (j < n)
        {
            if ((arr[i] + arr[j] == S) && (i != j))
            {
                flag++;
                vetor_temp[novo_tam] = i;
                novo_tam++;
            }
            j++;
        }
        i++;
    }
    if (flag > 0)
    {
        i = 0;
        while (i < novo_tam)
        {
            printf("%d\n", vetor_temp[i]);
            i++;
        }
    }
    else
        printf("Não possui números que somados seja igual a S\n");
}

int main(void)
{
    int v[5] = {1, 2, 3, 4, 5};
    encontrarSoma(v, 5, 10);
    return (0);
}