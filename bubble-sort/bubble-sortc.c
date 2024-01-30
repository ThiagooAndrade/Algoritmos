#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define length 20

int i, x;

void embaralha_v(int *v)
{
    srand(time(NULL)); // Seed para geração de números aleatórios
    for (int i = 0; i < length; i++)
    {
        v[i] = rand() % 100; // Preenche o v com valores aleatórios de 0 a 99
    }
}

void desembaralha_v(int *v)
{
    int troca;
    do
    {
        troca = 0; // troca inicia com 0

        //----------algoritimo bubble sort-------------
        for (x = 0; x < length - 1; x++)
        {
            if (v[x] > v[x + 1])
            {
                int a = v[x];
                v[x] = v[x + 1];
                v[x + 1] = a;
                troca = 1; // se houver uma troca de valores, troca = 1
            }
        }
    } while (troca); // se troca = 1 , repete-se o laço
}

// printa na tela os numeros do vetor
void posicao_v(int *v)
{
    for (int i = 0; i < length; i++)
    {
        printf("Posicao %d: %d\n", i, v[i]);
    }
}

int main()
{
    int vet[length];
    embaralha_v(vet);
    desembaralha_v(vet);
    posicao_v(vet);

    return 0;
}
