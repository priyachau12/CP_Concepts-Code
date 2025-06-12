#include <bits/stdc++.h>
using namespace std;
#define int long long

int solve()
{
  int n,m,l,r;
  cin>>n>>m>>l>>r;
  if(r-0 <= n-m)
  {
    cout<<-m<<" "<<0<<endl;
    return 0;
  }
  cout<<l<<" "<<l+m<<endl;
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