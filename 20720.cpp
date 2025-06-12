#include <bits/stdc++.h>
using namespace std;
#define int long long

int solve()
{
  int n, k, p;
  cin>>n>>k>>p;
  if(n*abs(p) < abs(k))
  {
    cout<<-1<<endl;
    return 0;
  }
  double res = ceil(abs(k + 0.0)/ abs(p+0.0));
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