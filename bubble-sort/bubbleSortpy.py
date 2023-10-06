from random import randint

def embaralha(l):
    """embaralha o baralho"""
    for i in range(len(l)):
        l[i] = randint(0, 100)

def bubblesort(l):
    """bubblesort o baralho"""
    troca = True
    while troca:
        troca = False
        for a in range(len(l) - 1):
            if l[a] > l[a+1]:
                aux = l[a]
                l[a] = l[a+1]
                l[a+1] = aux
                troca = True


def printa(l):
    """printa o baralho na tela"""
    for i in range(len(l)):
        print(l[i])

qtd = 20

li = [0] * qtd


embaralha(li)


bubblesort(li)

printa(li)

