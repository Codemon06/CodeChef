t = int(input())
for _ in range(t):
    n = int (input())
    g1 = {}
    g2 = {}
    for _ in range(4*n-1):
        x,y = map(int, input().split())
        g1[x] = g1.get(x,0) + 1
        g2[y] = g2.get(y,0) + 1
    for k,v in g1.items():
        if v%2!=0:
            x = k
            break
    for k,v in g2.items():
        if v%2!=0:
            y = k
            break
    print(x,y)

