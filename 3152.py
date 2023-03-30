import math


def ler_pontos():
    x1, y1 = input().split()
    x2, y2 = input().split()
    x3, y3 = input().split()
    x4, y4 = input().split()

    x1 = int(x1)
    y1 = int(y1)
    x2 = int(x2)
    y2 = int(y2)
    x3 = int(x3)
    y3 = int(y3)
    x4 = int(x4)
    y4 = int(y4)

    d1_2 = distancia(x1=x1, y1=y1, x2=x2, y2=y2)
    d2_3 = distancia(x1=x2, y1=y2, x2=x3, y2=y3)
    d3_4 = distancia(x1=x3, y1=y3, x2=x4, y2=y4)
    d4_1 = distancia(x1=x4, y1=y4, x2=x1, y2=y1)

    return calcula_area(d1=d1_2, d2=d2_3, d3=d3_4, d4=d4_1)


def distancia(x1, y1, x2, y2):
    x = x2 - x1
    x = math.pow(x, 2)

    y = y2 - y1
    y = math.pow(y, 2)

    return math.sqrt(x + y)


def heron(d1, d2):
    diagonal = math.sqrt((math.pow(d1, 2) + math.pow(d2, 2)))
    p = (d1 + d2 + diagonal) / 2
    area = math.sqrt(p * ((p - d1) * (p - d2) * (p - diagonal)))
    return area


def calcula_area(d1, d2, d3, d4):
    area1 = heron(d1, d2)
    area2 = heron(d3, d4)
    return area1 + area2


if __name__ == '__main__':
    area1 = ler_pontos()
    area2 = ler_pontos()

    if area1 > area2:
        print('terreno A')
    else:
        print('terreno B')
