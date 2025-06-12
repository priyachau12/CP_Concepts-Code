#include <bits/stdc++.h>
using namespace std;

int solve()
{
  int n; 
  cin>>n;
  vector<int>a(n), b(n);
  for(int i=0; i<n; i++)
  {
    cin>>a[i];
  }
  int min_sur = 1e9, count=0, need = -1;
  for(int i=0; i<n; i++)
  {
    cin>>b[i];
    if(a[i]>=b[i])
    {
        min_sur = min(min_sur, a[i]-b[i]);
    }
    else 
    {
        count++;
        need = max(need, b[i] - a[i]);
    }
  }

  if(count>1)
  {
    cout<<"NO\n";
    return 0;
  }
  else if(need<=min_sur || count==0) 
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