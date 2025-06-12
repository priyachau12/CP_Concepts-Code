#include <bits/stdc++.h>
using namespace std;
#define int long long

int solve()
{
  int n,k, res=0;
  cin>>n>>k;
  if(n%2==0)
  {
    res = ceil((n+0.0)/((k-(k%2)+0.0)));
    cout<<res<<endl;
  }
  else
  {
    res = ceil((n-k+0.0)/(k-(k%2)+0.0))+1;
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