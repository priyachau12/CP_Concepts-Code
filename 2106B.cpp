#include <bits/stdc++.h>
using namespace std;
#define int long long

int solve()
{
  int n, x;
  cin>>n>>x;
  vector<int> a(n);
  for(int i=0; i<x; i++)
  {
    cout<<i<<" ";
  }
  for(int i=n-1; i>=x; i--)
  {
    cout<<i<<" ";
  }
  cout<<endl;
  return 0;  
}


int32_t main()
{
  int tc;
  cin>>tc;
  while(tc--)
  {
    solve();
  }
}