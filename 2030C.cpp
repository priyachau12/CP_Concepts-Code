#include <bits/stdc++.h>
using namespace std;

int solve()
{
  int n;
  cin>>n;
  string s;
  cin>>s;
  if(s[0]=='1' || s[n-1]=='1')
  {
    cout<<"YES\n";
    return 0;
  }

  for(int i=0; i<n-1; i++)
  {
    if((s[i]=='1' && s[i-1]=='1') || (s[i]=='1' && s[i+1]=='1'))
    {
        cout<<"YES\n";
        return 0;
    }
  }
  cout<<"NO\n";
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