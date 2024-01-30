#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

#define length 20

int i, x;

void embaralha_baralho(int *v)
{
    srand(time(NULL)); // Seed para geração de números aleatórios
    for (int i = 0; i < length; i++)
    {
        v[i] = rand() % 1000; // Preenche o baralho com valores aleatórios de 0 a 999
    }
}

void desembaralha_baralho(int *v)
{
    int troca = true;
    do
    {
        troca = false;
        for (i = 0; i < length; i++)
        {
            for (x = i + 1; x < length; x++)
            {
                if (v[i] > v[x])
                {
                    int a = v[x];
                    v[x] = v[i];
                    v[i] = a;
                    troca = true;
                }
            }
        }
    } while (troca);
}

void posicao_baralho(int *v)
{
    for (int i = 0; i < length; i++)
    {
        printf("Posicao %d: %d\n", i, v[i]);
    }
}

int main()
{
    int vet[length];

    embaralha_baralho(vet);
    desembaralha_baralho(vet);
    posicao_baralho(vet);

    return 0;
}