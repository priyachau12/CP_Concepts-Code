#include <bits/stdc++.h>
using namespace std;

int solve()
{
  int  n, m1, m2, res=0;
  cin>>n>>m1>>m2;
  set<pair<int, int>> st1, st2;
  for(int i=0; i<m1; i++)
  {
    int x, y;
    cin>>x>>y;
    int a =  min(x,y), b=max(x,y);
    st1.insert({a,b});
  }
  for(int i=0; i<m2; i++)
  {
    int x, y;
    cin>>x>>y;
    int a =  min(x,y), b=max(x,y);
    st2.insert({a,b});
  }

  for (auto itr : st1)
  {
    if (!st2.count(itr))
    {
        res++;
    }
  }

  for (auto itr : st2)
  {
    if (!st1.count(itr))
    {
        res++;
    }
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