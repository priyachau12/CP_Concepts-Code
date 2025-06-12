#include <bits/stdc++.h>
using namespace std;

int solve()
{
  int n;
  cin>>n;
  vector<int>b(n-2);
  for(int i=0;i<n-2; i++)
  {
    cin>>b[i];
  }
  if(n-2 < 3)
  {
    cout<<"YES\n";
    return 0;
  }
  for(int i=1; i<n-3; i++)
  {
    if(b[i-1]==1 && b[i]==0 && b[i+1]==1)
    {
        cout<<"NO\n";
        return 0;
    }
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