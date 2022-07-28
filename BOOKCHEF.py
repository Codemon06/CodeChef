n,m = map(int,input().split())
c = set(list(map(int, input().split())))
arr = []
for _ in range(m):
    f,p,s = map(str, input().split())
    f = int(f)
    p = int(p)
    arr.append([f,p,s])

arr = sorted(arr, key=lambda x: x[1], reverse = True)
for f,p,s in arr:
    if( f in c):
        print(s)
for f,p,s in arr:
    if( f not in c):
        print(s)