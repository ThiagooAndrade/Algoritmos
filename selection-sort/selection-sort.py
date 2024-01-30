from random import randint

def embaralha(v):
    for a in range(len(v)):
        v[a] = randint(0, 100)


def selectionSort(v):
    troca = True
    while troca is True:
        troca = False
        for a in range(0, len(v) - 1, 1):
            for i in range(a + 1, len(v), 1):
                if v[a] > v[i]:
                    aux = v[a]
                    v[a] = v[i]
                    v[i] = aux
                    troca = True


def printa(v):
    for a in range(len(v)):
        print(f"Posicao {a}: {v[a]}")

length = 20

vet = [0] * length

embaralha(vet)

selectionSort(vet)

printa(vet)
