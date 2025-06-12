t = int(input())
while(t>0):
    for i in range(3):
        st = input()
        if st.count('?')>0:
            a=st.count('A')
            if(a==0) :
                print('A')
            b=st.count('B')
            if(b==0):
                print('B')
            c=st.count('C')
            if(c==0):
                print('C')
    t=t-1