n = int(input())

while n > 0:
    nome = input()
    tam = len(nome)
    nome2 = ''
    j = 0
    for i in range(int(tam / 2) - 1, -1, -1):
        nome2 = nome2 + nome[i]
        j = j + 1

    for i in range(tam - 1, int(tam / 2) - 1, -1):
        nome2 = nome2 + nome[i]
        j = j + 1

    print(nome2)
    n = n - 1
