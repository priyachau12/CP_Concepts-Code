#include <bits/stdc++.h>
using namespace std;
#define int long long

int solve()
{
  int n, k;
  cin>>n>>k;
  vector<int>vec(n);
  for(int i=0; i<n; i++)
  {
    cin>>vec[i];
  }
  sort(vec.begin(), vec.end(), greater<int>());
  int i=0, count =0;
  int mc = 0;
  while(i<n)
  {
    mc++;
    int ts = mc*vec[i];
    if(ts>=k)
    {
        count++;
        mc = 0;
    } 
    i++;
  }
  cout<<count<<endl;
  return 0;  
}


int32_t main()
{
  int tc;
  cin>>tc;
  while(tc--)
  {
    solve();
  }

}