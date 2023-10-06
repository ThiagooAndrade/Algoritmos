from random import randint

def embaralha(l):
    for a in range(len(l)):
        l[a] = randint(0, 100)


def selectionsort(l):
    troca = True
    while troca is True:
        troca = False
        for a in range(0, len(l) - 1, 1):
            for i in range(a + 1, len(l), 1):
                if l[a] > l[i]:
                    aux = l[a]
                    l[a] = l[i]
                    l[i] = aux
                    troca = True


def printa(l):
    for a in range(len(l)):
        print(l[a])

qtd = 10

li = [0] * qtd

embaralha(li)

selectionsort(li)

printa(li)
