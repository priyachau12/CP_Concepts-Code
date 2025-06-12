#include <bits/stdc++.h>
using namespace std;
#define int long long

int solve()
{
  int n, res=0;
  cin>>n;
  string s;
  cin>>s;
  res = count(s.begin(), s.end(), '1');
  res = res*n - res + (n-res);
  cout<<res<<endl;
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