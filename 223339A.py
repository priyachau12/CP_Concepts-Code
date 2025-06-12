def recursion(m):

    if (len(lst)<1 or m==0):
        return 0
    if (len(lst)<=m):
        return lst[0] + recursion(lst[1:],m)
    
    return recursion(lst[1:],m)

    
a = input().split()
m= int(a[1])
lst = list(map(int, input().split()))
print(recursion(lst,m))