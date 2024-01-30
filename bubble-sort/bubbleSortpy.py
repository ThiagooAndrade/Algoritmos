from random import randint

def embaralha(v):
    # """embaralha o baralho"""
    for i in range(len(v)):
        v[i] = randint(0, 100)

def bubbleSort(v):
    # """bubblesort o baralho"""
    troca = True
    while troca:
        troca = False
        for a in range(len(v) - 1):
            if v[a] > v[a+1]:
                aux = v[a]
                v[a] = v[a+1]
                v[a+1] = aux
                troca = True


def printa(v):
    # """printa o baralho na tela"""
    for i in range(len(v)):
        print(f"Posicao {i}: {v[i]}")

qtd = 20

vet = [0] * qtd

embaralha(vet)

bubbleSort(vet)

printa(vet)

