n = int(input())
frase = []

while n > 0:
    nome = input()
    tam = len(nome)
    metade = int(tam/2)
    nome2 = []
    
    for i in range(tam):
        if (64 < ord(nome[i]) < 91) or (96 < ord(nome[i]) < 123):
            nome2.append(chr(ord(nome[i]) + 3))
        else:
            nome2.append(nome[i])
    
    nome2.reverse()
    
    for i in range(metade, tam):
        nome2[i] = chr(ord(nome2[i]) - 1)
    
    frase.append(''.join(nome2))
    n -= 1

for palavra in frase:
    print(palavra)
