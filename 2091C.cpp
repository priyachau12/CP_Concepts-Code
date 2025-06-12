#include <bits/stdc++.h>
using namespace std;
#define int long long

int solve()
{
  int n;
  cin>>n;
  if(n%2==0)
  {
    cout<<-1<<endl;
    return 0;
  }
  cout<<1<<" ";
  for(int i=n; i>1; i--)
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