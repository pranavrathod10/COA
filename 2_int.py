from random import randint

n = int(input())

a=[]
b=[]

for i in range(n):
    colm = []
    for j in range(n):
        x = randint(0, 512)
        colm.append(x)
    a.append(colm)
    y = randint(0, 512)
    colm.append(y)
    b.append(colm)


Mtrix= [[0]*n]*n

for i in range(n):
    for j in range(n):
        Mtrix[i][j] = 0
        for k  in range(n):
            Mtrix[i][j] = Mtrix[i][j] + a[i][k]*b[k][j]
        print(Mtrix[i][j], end = " ")
    print('\n')
