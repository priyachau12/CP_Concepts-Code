#include <bits/stdc++.h>
using namespace std;

int solve()
{
  int n, a, b;
  cin>>n>>a>>b;
  if((abs(a-b)-1)%2==0)
  {
    cout<<"NO\n";
  }
  else
  {
    cout<<"YES\n";
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