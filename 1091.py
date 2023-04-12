n = int(input())
while n != 0:
    coord_x, coord_y = input().split()
    coord_x = int(coord_x)
    coord_y = int(coord_y)
    while n > 0:
        x, y = input().split()
        x = int(x)
        y = int(y)
        if x > coord_x:
            if y > coord_y:
                print("NE")
            elif y < coord_y:
                print("SE")
            elif y == coord_y:
                print("divisa")
        elif x < coord_x:
            if y > coord_y:
                print("NO")
            elif y < coord_y:
                print("SO")
            elif y == coord_y:
                print("divisa")
        elif x == coord_x:
            print("divisa")

        n = n - 1
    n = int(input())
