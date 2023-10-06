#include <stdio.h>

#include <stdlib.h>
#include <time.h>

int i, x, qtd = 20;

void embaralha_baralho(int *v)
{
    srand(time(NULL)); // Seed para geração de números aleatórios
    for (int i = 0; i < 20; i++)
    {
        v[i] = rand() % 1000; // Preenche o baralho com valores aleatórios de 0 a 999
    }
}

void desembaralha_baralho(int *v)
{
    int troca;
    do
    {
        troca = 0;
        for (i = 0; i < 20; i++)
        {
            for (x = i + 1; x < 20; x++)
            {
                if (v[i] > v[x])
                {
                    int a = v[x];
                    v[x] = v[i];
                    v[i] = a;
                    troca = 1;
                }
            }
        }
    } while (troca);
}

void posicao_baralho(int *v)
{
    for (int i = 0; i < 20; i++)
    {
        printf("%d\n", v[i]);
    }
}

int main()
{
    int vet[qtd];

    embaralha_baralho(vet);
    desembaralha_baralho(vet);
    posicao_baralho(vet);

    return 0;
}
