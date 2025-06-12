// modified file babyyyyyyyyyyyyy

#include <bits/stdc++.h>
using namespace std;
#define int long long

int solve()
{
  int k;
  cin>>k;
  int x=0, y=0, n=0;
  vector<pair<int, int>>vp;
  while(k>0)
  {
    vp.push_back({x,y});
    int t = 1;
    while(k>t-1)
    {
        x++;
        vp.push_back({x,y});
        k-=t;
        t++;
    }
    x++;
    y++;
  }
  cout<<vp.size()<<endl;
  for (auto x: vp)
  {
    cout<< x.first <<" "<< x.second <<endl;
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