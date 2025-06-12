#include <bits/stdc++.h>
using namespace std;
#define int long long

int solve()
{
  long long n;
  cin>>n;
  int res = 0;
  while(n>0)
  {
    res += n;
    n/=2;
  }
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