def solve():
    n = int(input())
    s = input().strip()
    zc = s.count('0')
    oc = s.count('1')
    if(zc <= (n//2 + (n%2))):
        print("YES")
    else:
        print("NO")
    
t = int(input())
while(t>0):
    solve()
    t-=1