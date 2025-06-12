#include <bits/stdc++.h>
using namespace std;

int solve()
{
  int n;
  cin>>n;
  int x;
  cin>>x;
  int y;
  bool ok=false;
  for(int i=1; i<n; i++)
  {
    cin>>y;
    //cout<<x<<" "<<y<<" "<<abs(x-y)<<endl;
    if(abs(x-y)!=5 && abs(x-y)!=7)
    {
        ok=true;
    }
    x=y;
  }
  if(ok)
  {
    cout<<"NO\n";
    return 0;
  }
  cout<<"YES\n";
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