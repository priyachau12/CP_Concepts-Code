for _ in range(int(input())):
    s = input().strip()
    h , m = map(int,  s.split(':'))
    if h==0:
        print(f'{h+12:02}:{m:02} AM')
    elif h==12:
        print(f'{h:02}:{m:02} PM')
    elif h>12:
        print(f'{(h-12):02}:{m:02} PM')
    else:
        print(f'{h:02}:{m:02} AM')