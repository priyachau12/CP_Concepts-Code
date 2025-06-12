#include <bits/stdc++.h>
using namespace std;

int solve()
{
  long long n, k;
  cin>>n>>k;
  k = min(k, 60ll);
  cout<<min((1ll<<k), n+1)<<endl;
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