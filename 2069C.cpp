#include <bits/stdc++.h>
using namespace std;

int solve()
{
  int n;
  vector<int>vec(n);
  for(int i=0; i<n; i++)
  {
    cin>>vec[i];
  }

  for(int i=0; i<n; i++)
  {
    
  }
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
9 
1 2 3 2 1 3 2 2 3
0 1 2 3 4 5 6 7 8

  0 4
2 
5
8


(0, 2) -> (0, 1, 2)
(0, 5) -> (0, 1, 5), (0, 3, 5), (0, 1, 3, 5)
...



1 2 3
1 2 2 3 2 2 3 


1 2 2 3 2 1 2 2 3



*/