#include <bits/stdc++.h>
using namespace std;

int solve()
{
  int n;
  cin>>n;
  string str;
  cin>>str;
  set<int>s;
  for(int i=1; i<=n; i++)
  {
    s.insert(i);
  }
  int k=2, a=0,b=0, mx=n, mn=1;
  for(int i=0; i<n-1; i++)
  {
    if(str[i]=='0')
    {
        s.erase(mx);
        a++;
        mx--;
    }
    else
    {
        s.erase(mn);
        b++;
        mn++;
    }

    auto tmp = lower_bound(s.begin(), s.end(), k);
    cout<<k-(a+b)<<" ";
    k++;
  }
  cout<<endl;
  return 0;  
}


int main()
{
  int tc;
  cin>>tc;
  while(tc--)
  {
    solve();
  }

}

/*
n -> 1, 2, 3, 4, 5

match: (n-1) -> one player eliminated

environment: 0 (Lower temp wins), 1(Higher temp wins)
               
(n-1) -> 5 -> "00101"
0 -> 1(1,2),2(2,3),3(3,4),4(4,5),5(1,2)


(2) --> (n-1)

(2) -> (1,2) -> 1 winner
(3) -> (1,2,3) -> (1,2) & (1,3) -> 1 winner
                  (1,3) & (1,2) -> 1 winner
                  (2,3) & (1,2) -> 1 winner
(4) -> (1,2,3,4) -> (1,2) & (1,3) & (1,4) -> 4
                    (1,3) & (1,4) & (1,2) -> 2
                    (1,4) & (1,2) & (1,3) -> 3


x -> [2, n-1]
how many possible winners: 1 1 3



*/