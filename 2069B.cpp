#include <bits/stdc++.h>
using namespace std;

int solve()
{
  int n,m;
  cin>>n>>m;
  vector<vector<int>>vec(n, vector<int>(m));
  for(int i=0; i<n; i++)
  {
    for(int j =0; j<m; j++)
    {
        cin>>vec[i][j];
    }
  }
  map<int, int>mp;
  for(int i=0; i<n; i++)
  {
    for(int j=0; j<m; j++)
    {
        int current = vec[i][j];
        if ((i > 0&&vec[i - 1][j]==current) ||
            (i < n - 1&&vec[i + 1][j]==current) ||
            (j > 0&&vec[i][j - 1]==current) ||
            (j < m - 1&&vec[i][j + 1]==current))
        {
            mp[current] = 2;
        }
        else
        {
            mp[current] = max(mp[current], 1);
        }
    }
  }
  int res = 0, mx = -1;
  //cout<<"map\n";
  for(auto x: mp)
  {
    //cout<<x.first<<" "<<x.second<<endl;
    res += x.second;
    mx = max(mx, x.second); 
  }
  cout<<res-mx<<endl;
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