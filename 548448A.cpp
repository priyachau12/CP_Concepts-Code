#include <bits/stdc++.h>
using namespace std;

int solve()
{
  int a,b;
  cin>>a>>b;
  if((a+b)%2==0)
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