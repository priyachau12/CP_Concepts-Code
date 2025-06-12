#include <bits/stdc++.h>
using namespace std;
#define int long long

int solve()
{
  int n, m;
  cin>>n>>m;
  vector<int>vec(m);
  for(int i=0; i<m; i++){
    cin>>vec[i];
  }
  sort(vec.begin(), vec.end());
  vector<int>pre(m+1,0);
  for(int i=1; i<=m; i++){
    pre[i] = pre[i-1]+vec[i-1];
  }

  for (int i=0; i<m-1; i++)
  {
    int req = 
  }
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