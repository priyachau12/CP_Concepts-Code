#include <bits/stdc++.h>
using namespace std;

bool comp(pair<int,int>a, pair<int,int>b)
{
    if(a.first==b.first)
    {
        return b.second > a.second;
    }
    return a.first<b.first;
}

int solve()
{
  long long n,p;
  cin>>n>>p;
  vector<pair<long long, long long>>vp(n+1);
  for(int i=0; i<n; i++)
  {
    cin>>vp[i].second;
  }
  for(int i=0; i<n; i++)
  {
    cin>>vp[i].first;
  }
  vp[n] = {p, 1e9};
  sort(vp.begin(), vp.end(), comp);

  long long res = p, i=0;
  n--;
  while(n>0)
  {
    res += min(n, vp[i].second) * vp[i].first;
    n -= vp[i].second;
    i++;
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