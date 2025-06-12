t = int(input())
while t>0:
    s = input().strip()
    l = s.split()
    res = ''.join([a[0] for a in l])
    print(res)
    t-=1