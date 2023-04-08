n = int(input())
for i in range(n):
    lista = list(map(int, input().split()))
    count = int(lista[0])
    tamanho = len(lista)
    soma = 0
    for j in range(1, tamanho):
        soma = soma + int(lista[j])
    media = float(soma / count)
    aux = 0
    for j in range(1, tamanho):
        if media < lista[j]:
            aux = aux + 1
    result = float((aux * 100) / count)
    print("{:.3f}%".format(result))
