#include <bits/stdc++.h>
using namespace std;

int solve()
{
  int n;
  cin>>n;
  vector<long long>vec(n), pref(n), suff(n);
  for(int i=0; i<n; i++)
  {
    cin>>vec[i];
  }
  pref[0] = max(0ll, vec[0]);
  suff[n-1] =  -1 * min(0ll, vec[n-1]);
  for(int i=1; i<n; i++)
  {
    pref[i]=pref[i-1] + max(0ll, vec[i]);
    suff[n-1-i]= suff[n-i] - min(0ll, vec[n-1-i]);
  }
  long long res = -1;
  for(int i=0; i<n; i++)
  {
    res = max(pref[i] + suff[i], res);
  }
  cout<<res<<endl;
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