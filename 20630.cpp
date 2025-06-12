#include <bits/stdc++.h>
using namespace std;

int solve()
{
  int a,b;
  cin>>a>>b;
  if(a==1 && b==1)
  {
    cout<<1<<endl;
    return 0;
  }
  cout<<max(a,b)-min(a,b)<<endl;
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