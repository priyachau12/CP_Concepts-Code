#include <bits/stdc++.h>
using namespace std;

int solve()
{
  long long n, even=0, odd=0;
  cin>>n;
  vector<int>v(n);
  for(int i=0; i<n; i++)
  {
    cin>>v[i];
    if(v[i]%2==0)
    {
        even+=v[i];
    }
    else{
        odd+=v[i];
    }
  }
  if(even>odd)
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