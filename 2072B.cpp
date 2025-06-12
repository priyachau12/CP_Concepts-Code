#include <bits/stdc++.h>
using namespace std;
#define int long long

int solve()
{
  int n; cin>>n;
  string s;
  cin>>s;
  int a=0,b=0;
  for(int i=0; i<n; i++)
  {
    a += (s[i] == '-');
    b += (s[i] == '_');
  }
  if (a<2 || b<1)
  {
    cout<<0<<endl;
  }
  else
  {
    int res = ceil((a+0.0)/2.0) * (a-ceil((a+0.0)/2.0)) * b;
    cout<<res<<endl;
  }
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