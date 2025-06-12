def solve():
    n = int(input())
    res = "1" + ("0"*(n-1))
    print(res)
    
t = int(input())
while(t>0):
    solve()
    t-=1