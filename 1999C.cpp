#include <bits/stdc++.h>
using namespace std;

int solve()
{
  int n,s,k;
  cin>>n>>s>>k;
  int a=0,c,d, diff=0;

  for(int i=0; i<n; i++)
  {
    cin>>c>>d;
    diff = max(diff, c-a);
    a=d;
  }
  diff=max(diff, k-a);
  if(diff>=s)
  {
    cout<<"YES\n";
  }
  else
  {
    cout<<"NO\n";
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