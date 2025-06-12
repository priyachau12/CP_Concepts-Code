
def getSplits(num):
    res = []
    for i in range(len(num)-1):
        tmp = ()
        tmp += tuple(map(int, [c for c in num[:i]]))
        tmp += tuple([int(num[i:i+2])])
        tmp += tuple (map(int, [c for c in num[i+2:]]))
        res.append(tmp)
    return res

def solve():
    n = int(input())
    num = input().strip()
    if len(num)<3:
        print(int(num))
        return   
    splits = getSplits(num)
    res = 10000000000
    tmp = 0
    for pos in splits:
        if 0 in pos:
            res = 0
            break
        tmp = sum(pos)
        tmp = tmp - pos.count(1) + (pos.count(1)==len(pos))
        res = min(res, tmp)
    print(res)

t = int(input().strip())
while(t>0):
    solve()
    t-=1