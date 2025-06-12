#include <bits/stdc++.h>
using namespace std;

int solve()
{
  int n,k;
  cin>>n>>k;
  vector<int>vec(n);
  for(int i=0; i<n; i++)
  {
    cin>>vec[i];
  }
 
  int mn = 15;
  for(int i=0; i<n; i++)
  {
    mn = min(mn, (k - (vec[i]%k))%k);
  }
  if(k==4)
  {
    int ec=0;
    for(int i=0; i<n; i++)
    {
        ec += vec[i]%2==0;
    }
    mn = min(mn, max(0, 2-ec));
  }
  cout<<mn<<endl;

  
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