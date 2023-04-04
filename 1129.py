n = int(input())
while n > 0:
    for n in range(n,  0, -1):
        lista = input().split()
        escolha = False
        letra = 0
        for i in range(5):
            if int(lista[i]) <= 127 and not escolha:
                escolha = True
                letra = i + 1
            elif int(lista[i]) <= 127 and escolha:
                letra = -10
                break
        if letra == -10 or letra == 0 or not escolha:
            print('*')
        elif escolha:
            print(chr(64+letra))

    n = int(input())
