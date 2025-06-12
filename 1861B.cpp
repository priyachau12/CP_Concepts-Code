#include<bits/stdc++.h>
using namespace std;
int solve()
{
  string a,b;
  cin>>a>>b;
  int l=a.size();
  for(int i=0;i<l-1;i++)
  {
    if(a[i]==b[i] && b[i]=='0' && a[i+1]==b[i+1] && b[i+1]=='1')
    {
      cout<<"YES"<<endl;
      return 0;
    }
  }
  cout<<"NO"<<endl;
  return 0;
}
int main()
{
  int t; cin>>t;
  while(t--)
  {
    solve();
  }
}