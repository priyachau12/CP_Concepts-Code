t=int(input())
while(t>0):
  count=0
  flag=True
  line=input("")
  nums=line.split()
  n=int(nums[0])
  m=int(nums[1])
  x=input()
  s=input()
  if(s in x):
    print("0")
    flag=False
  while (len(x)<n*m and flag):
    x+=x
    count+=1
    if s in x:
      print(count)
      flag=False
      break
  if(flag):
    print("-1")
  t=t-1