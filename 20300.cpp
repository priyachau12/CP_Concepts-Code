#include <bits/stdc++.h>
using namespace std;

int solve()
{
  int n;
  cin>>n;
  vector<int>vec(n);
  int res = 0;
  for(int i=0; i<n; i++)
  {
    cin>>vec[i];
  }
  sort(vec.begin(), vec.end());
  swap(vec[0], vec[n-1]);
  swap(vec[n-1], vec[1]);
  int mi = vec[0];
  int ma = vec[0];
  for(int i=0; i<n; i++)
  {
    ma = max(ma, vec[i]);
    mi = min(mi, vec[i]);
    res += ma - mi;
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