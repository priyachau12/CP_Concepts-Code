#include <bits/stdc++.h>
using namespace std;

int solve()
{
  int n; cin>>n;
  if(n%2)
  {
    cout<<"NO\n";
    return 0;
  }
  cout<<"YES\n";
  int k = 1;
  for(int i=0; i<n; i++)
  {
    cout<<k<<" ";
    k *= -1;
  }
  cout<<endl;
  
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